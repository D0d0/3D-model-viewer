#include "Vertexy.h"
#include "vertex.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


Vertexy::Vertexy(){
	this->vertexs = gcnew List<vertex^>;
}

void Vertexy::add(vertex^ newVertex){
	this->vertexs->Add(newVertex);
}


void Vertexy::add(double^ X, double^ Y, double^ Z){
	this->vertexs->Add(gcnew vertex(X, Y, Z));
}