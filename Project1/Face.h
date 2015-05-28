#pragma once
#include "vertex.h"
using namespace std;
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Media::Media3D;

ref class Face{
	List<Int32>^ points;
	List<vertex^>^ vertexy;
public:
	Face();
	void add(Int32 point){ this->points->Add(point); }
	void add(List<Int32>^ points){ this->points = points; }
	void addVertex(vertex^ newVertex);
	List<Int32>^ getPoints(){ return this->points; }
	List<vertex^>^ getVertexy(){ return this->vertexy; }
	Vector3D^ getVector();
	Vector3D^ getNormalizedVector();
};

