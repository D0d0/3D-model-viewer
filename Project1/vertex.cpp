#include "vertex.h"
using namespace std;
using namespace System;
using namespace System::Windows::Media::Media3D;

Vertex::Vertex(double^ xN, double^ yN, double^ zN) {
	this->vector = gcnew Point3D((Double)xN, (Double)yN, (Double)zN);
}