#pragma once

#include "vertex.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

ref class Vertexy{
	List<vertex^>^ vertexs;
public:
	Vertexy();
	void add(vertex^ newVertex);
	void add(double^ X, double^ Y, double^ Z);
	List<vertex^>^ getVertexy(){ return vertexs; }
	vertex^ getVertexOnIndex(Int32 index){ return vertexs[index]; }
};

