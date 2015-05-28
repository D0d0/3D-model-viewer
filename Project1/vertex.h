#pragma once
using namespace System::Windows::Media::Media3D;
ref class vertex{
	Point3D^ vector;
public:
	vertex(double^ xN, double^ yN, double^ zN);
	double^ getX(){ return this->vector->X; }
	double^ getY(){ return this->vector->Y; }
	double^ getZ(){ return this->vector->Z; }
	void setX(double nX){ this->vector->X = nX; }
	void setY(double nY){ this->vector->Y = nY; }
	void setZ(double nZ){ this->vector->Z = nZ; }
	void setAll(double nX, double nY, double nZ){ this->vector->X = nX; this->vector->Y = nY; this->vector->Z = nZ; }
};

