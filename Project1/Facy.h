#pragma once
#include "Face.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

ref class Facy{
	List<Face^>^ faces;
public:
	Facy();
	void addFace(){ this->faces->Add(gcnew Face()); }
	void addToLast(List<Int32>^ point){ this->faces[this->faces->Count - 1]->add(point); }
	void addToLast(Int32 point) { this->faces[this->faces->Count - 1]->add(point); }
	List<Face^>^ getFaces(){ return faces; }
};

