#pragma once
#include "vertex.h"
using namespace std;
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Media::Media3D;

ref class Face {
	List<Int32>^ points;
	List<Vertex^>^ vertices;
public:
	Face();
	void add(Int32 point) { this->points->Add(point); }
	void add(List<Int32>^ points) { this->points = points; }
	void addVertex(Vertex^ newVertex);
	List<Int32>^ getPoints() { return this->points; }
	List<Vertex^>^ getVertexy() { return this->vertices; }
	Vector3D^ getVector();
	Vector3D^ getNormalizedVector();
};

