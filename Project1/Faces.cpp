#include "Faces.h"
#include "Face.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

Faces::Faces() {
	this->faces = gcnew List<Face^>;
}