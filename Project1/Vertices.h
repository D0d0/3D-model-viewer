#pragma once

#include "vertex.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

ref class Vertices {
	List<Vertex^>^ vertices;
public:
	Vertices();
	void add(Vertex^ newVertex);
	void add(double^ X, double^ Y, double^ Z);
	List<Vertex^>^ getVertices() { return vertices; }
	Vertex^ getVertexOnIndex(Int32 index) { return vertices[index]; }
};

