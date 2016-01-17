#include "Vertices.h"
#include "vertex.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


Vertices::Vertices() {
	this->vertices = gcnew List<Vertex^>;
}

void Vertices::add(Vertex^ newVertex) {
	this->vertices->Add(newVertex);
}


void Vertices::add(double^ X, double^ Y, double^ Z) {
	this->vertices->Add(gcnew Vertex(X, Y, Z));
