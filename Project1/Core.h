#pragma once

#include "fileM.h"
#include "Vertices.h"
#include "Faces.h"
#include "Face.h"

using namespace std;
using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::Windows::Media::Media3D;

ref class Core {
	fileM^ file;
	PictureBox^ pictureBox;
	Vertices^ vertexy;
	Faces^ face;
	Double^ xSize, ySize, xPosition, yPosition, zPosition;
	Int32 xDiff, yDiff, lightX, lightY, lightZ;
	Graphics^ g;
	BufferedGraphics^ buffer;
	Rectangle grapRectangle;
	SolidBrush^ whiteBrush;
	SolidBrush^ yellowBrush;
	Pen^ blackPen;
	Quaternion^ rot;
	Quaternion^ qNode;
	Vector3D^ axis;
	List<PointF>^ listPoints;
	List<Face^>^ faceList;
	Color^ objectColor;
	bool rotation, aroundX, aroundY, aroundZ;
public:
	Core(PictureBox^ pictureBoxN);
	array<PointF>^ createPoints(Face^ oneFace);
	void drawPicture();
	void loadFile(String^ path);
	void cleanPicture();
	void changeScale(Int32 scaleX, Int32 scaleY);
	void scaleMinus();
	void scalePlus();
	void changePosition(Int32 diffX, Int32 diffY);
	void setNewPosition(Int32 posX, Int32 posY);
	void translateZPlus();
	void translateZMinus();
	void translateXPlus();
	void translateXMinus();
	void translateYPlus();
	void translateYMinus();
	void rotateVertexes();
	void rotateVererxes(Quaternion^ angle);
	void rotateXPlus();
	void rotateXMinus();
	void rotateYPlus();
	void rotateYMinus();
	void rotateZPlus();
	void rotateZMinus();
	void setDefault();
	void resetRotation();
	void Reset();
	void setRotationX(bool x);
	void setRotationY(bool y);
	void setRotationZ(bool z);
	void setLightX(int X) { this->lightX = X/* + xPosition*/; }
	void setLightY(int Y) { this->lightY = Y/* + yPosition*/; }
	void setLightZ(int Z) { this->lightZ = Z /*- this->zPosition*/; }
	void setColor(Color^ c) { this->objectColor = c; }
	double getAngle() { return this->rot->Angle; };
	bool isRotating() { return this->rotation; }
};