#include "Facy.h"
#include "Face.h"

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

Facy::Facy(){
	this->faces = gcnew List<Face^>;
}