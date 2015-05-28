#include "Face.h"
#include "vertex.h"
using namespace std;
using namespace System;
using namespace System::Collections::Generic;

Face::Face(){
	this->points = gcnew List<Int32>;
	this->vertexy = gcnew List<vertex^>;
}

Vector3D^ Face::getVector(){
	Vector3D^ vector1 = gcnew Vector3D((double)this->vertexy[1]->getX() - (double)this->vertexy[0]->getX(), ((double)this->vertexy[1]->getY() - (double)this->vertexy[0]->getY()), (double)this->vertexy[1]->getZ() - (double)this->vertexy[0]->getZ());
	Vector3D^ vector2 = gcnew Vector3D((double)this->vertexy[2]->getX() - (double)this->vertexy[0]->getX(), ((double)this->vertexy[2]->getY() - (double)this->vertexy[0]->getY()), (double)this->vertexy[2]->getZ() - (double)this->vertexy[0]->getZ());
	return Vector3D::CrossProduct((Vector3D)vector2, (Vector3D)vector1);
}

void Face::addVertex(vertex^ newVertex){
	this->vertexy->Add(newVertex);
}

Vector3D^ Face::getNormalizedVector(){
	Vector3D^ res = this->getVector();
	res->Normalize();
	return res;
}