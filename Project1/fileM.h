#pragma once
#include "Vertices.h"
#include "Faces.h"

using namespace std;
using namespace System;

ref class fileM {
	String^ path;
	Vertices^ vertices;
	Faces^ faces;
public:
	fileM(String^ filePath);
	void loadFile();
	array<String^>^ parse(String^ entry);
	Vertices^ getVertices() { return vertices; }
	Faces^ getFaces() { return faces; }
};