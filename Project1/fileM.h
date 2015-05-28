#pragma once
#include "Vertexy.h"
#include "Facy.h"

using namespace std;
using namespace System;

ref class fileM{
	String^ path;
	Vertexy^ vertexs;
	Facy^ face;
public:
	fileM(String^ filePath);
	void loadFile();
	array<String^>^ parse(String^ entry);
	Vertexy^ getVertexy(){ return vertexs; }
	Facy^ getFace(){ return face; }
};

