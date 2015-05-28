#include "Core.h"
#include "Face.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Media::Media3D;
using System::Diagnostics::Debug;

int compatorM(Face^ x, Face^ y){
	Double max1 = -10000000000;
	for each (vertex^ var in x->getVertexy()){
		if ((double)var->getZ() > max1){
			max1 = (double)var->getZ();
		}
	}
	Double max2 = -10000000000;
	for each (vertex^ var in y->getVertexy()){
		if ((double)var->getZ() > max2){
			max2 = (double)var->getZ();
		}
	}
	return max2.CompareTo(max1);
}

Core::Core(PictureBox^ pictureBoxN){
	this->pictureBox = pictureBoxN;
	this->vertexy = gcnew Vertexy;
	this->face = gcnew Facy;
	this->g = pictureBox->CreateGraphics();
	this->buffer = BufferedGraphicsManager::Current->Allocate(this->g, this->pictureBox->ClientRectangle);
	this->grapRectangle = this->pictureBox->ClientRectangle;
	this->whiteBrush = gcnew SolidBrush(Color::White);
	this->yellowBrush = gcnew SolidBrush(Color::Yellow);
	this->blackPen = gcnew Pen(Color::Black);
	this->listPoints = gcnew List<PointF>;
	this->faceList = gcnew List<Face^>;
	this->setDefault();
}

void Core::setDefault(){
	this->axis = gcnew Vector3D();
	this->rotation = false;
	this->xSize = 100.0;
	this->ySize = 100.0;
	this->xPosition = 300.0;
	this->yPosition = 200.0;
	this->zPosition = 0.0;
	this->xDiff = 0;
	this->yDiff = 0;
	this->lightX = 0;
	this->lightY = 0;
	this->lightZ = 10;
	this->rotation = false;
	this->aroundX = false;
	this->aroundY = false;
	this->aroundZ = false;
	this->objectColor = Color::Green;
}

void Core::resetRotation(){
	this->rotation = !this->rotation;
	if (this->rotation && (this->aroundX || this->aroundY || this->aroundZ)){
		this->rot = gcnew Quaternion((Vector3D)this->axis, 1.0);
	}
}

void Core::Reset(){
	this->faceList->Clear();
	this->vertexy = this->file->getVertexy();
	this->face = this->file->getFace();
	for each (Face^ face in this->face->getFaces()){
		for each (Int32 index in face->getPoints()){
			face->addVertex(this->vertexy->getVertexOnIndex(index - 1));
		}
		this->faceList->Add(face);
	}
	this->faceList->Sort(gcnew Comparison<Face^>(compatorM));
	this->setDefault();
	if (this->rotation){
		this->resetRotation();
	}
}

void Core::setRotationX(bool x){
	this->aroundX = x;
	this->axis->X = this->aroundX ? 1.0 : 0.0;
	if (this->rotation && (this->aroundX || this->aroundY || this->aroundZ)){
		this->rot = gcnew Quaternion((Vector3D)this->axis, 1.0);
	}
}

void Core::setRotationY(bool y){
	this->aroundY = y;
	this->axis->Y = this->aroundY ? 1.0 : 0.0;
	if (this->rotation && (this->aroundX || this->aroundY || this->aroundZ)){
		this->rot = gcnew Quaternion((Vector3D)this->axis, 1.0);
	}
}

void Core::setRotationZ(bool z){
	this->aroundZ = z;
	this->axis->Z = this->aroundZ ? 1.0 : 0.0;
	if (this->rotation && (this->aroundX || this->aroundY || this->aroundZ)){
		this->rot = gcnew Quaternion((Vector3D)this->axis, 1.0);
	}
}

void Core::cleanPicture(){
	this->buffer->Graphics->FillRectangle(whiteBrush, grapRectangle);
}

void Core::loadFile(String^ path){
	this->file = gcnew fileM(path);
	this->file->loadFile();
	this->Reset();
}

void Core::changeScale(Int32 scaleX, Int32 scaleY){
	this->xSize = (Double)scaleX;
	this->ySize = (Double)scaleY;
}

void Core::scaleMinus(){
	this->xSize = (Double)this->xSize * 0.9;
	this->ySize = (Double)this->ySize * 0.9;
}

void Core::scalePlus(){
	this->xSize = (Double)this->xSize * 1.1;
	this->ySize = (Double)this->ySize * 1.1;
}

void Core::changePosition(Int32 diffX, Int32 diffY){
	this->xDiff = diffX;
	this->yDiff = diffY;
}

void Core::setNewPosition(Int32 posX, Int32 posY){
	this->xPosition += posX;
	this->yPosition += posY;
}

void Core::translateZPlus(){
	//this->zPosition += 1.0;
	this->lightZ++;
	for each (vertex^ oneVertex in this->vertexy->getVertexy())	{
		oneVertex->setZ((Double)oneVertex->getZ() + 0.5);
		}
}

void Core::translateZMinus(){
	//this->zPosition -= 0.5;
	this->lightZ--;
	for each (vertex^ oneVertex in this->vertexy->getVertexy())	{
		oneVertex->setZ((Double)oneVertex->getZ() - 0.5);
		}
}

void Core::translateXPlus(){
	//this->xPosition += 0.5;
	this->lightX++;
	for each (vertex^ oneVertex in this->vertexy->getVertexy())	{
		oneVertex->setX((Double)oneVertex->getX() + 0.5);
	}
}

void Core::translateXMinus(){
	//this->xPosition -= 0.5;
	this->lightX--;
	for each (vertex^ oneVertex in this->vertexy->getVertexy())	{
		oneVertex->setX((Double)oneVertex->getX() - 0.5);
	}
}

void Core::translateYPlus(){
	//this->yPosition += 0.5;
	this->lightY++;
	for each (vertex^ oneVertey in this->vertexy->getVertexy())	{
		oneVertey->setY((Double)oneVertey->getY() + 0.5);
	}
}

void Core::translateYMinus(){
	//this->yPosition -= 0.5;
	this->lightY--;
	for each (vertex^ oneVertey in this->vertexy->getVertexy())	{
		oneVertey->setY((Double)oneVertey->getY() - 0.5);
	}
}

void Core::rotateVererxes(Quaternion^ angle){
	for each (vertex^ oneVertex in this->vertexy->getVertexy())	{
		this->qNode = Quaternion::Multiply((Quaternion)gcnew Quaternion((Double)oneVertex->getX(), (Double)oneVertex->getY(), (Double)oneVertex->getZ(), 0.0), (Quaternion)angle);
		oneVertex->setAll(this->qNode->X, this->qNode->Y, this->qNode->Z);
	}
}

void Core::rotateVertexes(){
	for each (vertex^ oneVertex in this->vertexy->getVertexy())	{
		this->qNode = Quaternion::Multiply((Quaternion)gcnew Quaternion((Double)oneVertex->getX(), (Double)oneVertex->getY(), (Double)oneVertex->getZ(), 0.0), (Quaternion)this->rot);
		oneVertex->setAll(this->qNode->X, this->qNode->Y, this->qNode->Z);
	}
}

void Core::rotateXPlus(){
	Vector3D^ vector = gcnew Vector3D(1.0, 0.0, 0.0);
	Quaternion^ tmp = gcnew Quaternion((Vector3D)vector, -5.0);
	rotateVererxes(tmp);
}

void Core::rotateXMinus(){
	Vector3D^ vector = gcnew Vector3D(1.0, 0.0, 0.0);
	Quaternion^ tmp = gcnew Quaternion((Vector3D)vector, 5.0);
	rotateVererxes(tmp);
}

void Core::rotateYPlus(){
	Vector3D^ vector = gcnew Vector3D(0.0, 1.0, 0.0);
	Quaternion^ tmp = gcnew Quaternion((Vector3D)vector, -5.0);
	rotateVererxes(tmp);
}

void Core::rotateYMinus(){
	Vector3D^ vector = gcnew Vector3D(0.0, 1.0, 0.0);
	Quaternion^ tmp = gcnew Quaternion((Vector3D)vector, 5.0);
	rotateVererxes(tmp);
}

void Core::rotateZPlus(){
	Vector3D^ vector = gcnew Vector3D(0.0, 0.0, 1.0);
	Quaternion^ tmp = gcnew Quaternion((Vector3D)vector, -5.0);
	rotateVererxes(tmp);
}

void Core::rotateZMinus(){
	Vector3D^ vector = gcnew Vector3D(0.0, 0.0, 1.0);
	Quaternion^ tmp = gcnew Quaternion((Vector3D)vector, 5.0);
	rotateVererxes(tmp);
}

void Core::drawPicture(){
	this->cleanPicture();
	if (this->rotation && (this->aroundX || this->aroundY || this->aroundZ)){
		this->rotateVertexes();
	}
	Vector3D^ vec = gcnew Vector3D(this->lightX, this->lightY, this->lightZ);
	this->faceList->Sort(gcnew Comparison<Face^>(compatorM));
	vec->Normalize();
	double farba;
	for each(Face^ oneFace in this->faceList){
		if (oneFace->getNormalizedVector()->Z >= 0){
			double^ farba = Vector3D::DotProduct((Vector3D)vec, (Vector3D)oneFace->getNormalizedVector());
			farba = ((double)farba < 0.0 || Double::IsNaN((double)farba)) ? 0.0 : farba;
			try {
				this->buffer->Graphics->FillPolygon(gcnew SolidBrush(Color::FromArgb(this->objectColor->R * (double)farba, this->objectColor->G  * (double)farba, this->objectColor->B  * (double)farba)), this->createPoints(oneFace));
			}
			catch (Exception^ e){
				Diagnostics::Debug::WriteLine(this->objectColor->R + " " + farba);
			}
		}
	}
	this->buffer->Render();
}

array<PointF>^ Core::createPoints(Face^ oneFace){
	this->listPoints->Clear();
	vertex^ oneVertex;
	PointF onePoint;
	for each(Int32 index in oneFace->getPoints()){
		oneVertex = this->vertexy->getVertexOnIndex(index - 1);
		onePoint.X = (Double)oneVertex->getX() * (Double)this->xSize + this->xPosition + this->xDiff;
		onePoint.Y = -(Double)oneVertex->getY() * (Double)this->ySize + this->yPosition + this->yDiff;
		this->listPoints->Add(onePoint);
	}
	return this->listPoints->ToArray();
}