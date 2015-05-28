#include <iostream>
#include <sstream>
#include "fileM.h"
#include "Vertexy.h"

using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Diagnostics;

fileM::fileM(String^ filePath){
	this->path = filePath;
	this->vertexs = gcnew Vertexy;
	this->face = gcnew Facy;
}

void fileM::loadFile(){
	StreamReader^ input = File::OpenText(this->path);
	String^ line;
	array<String^>^ tmp;
	String^ action;
	while ((line = input->ReadLine()) != nullptr){
		if (line->Length > 0){
			line->Trim();
			tmp = this->parse(line);
			if (tmp[0]->Equals("v")){
				this->vertexs->add(Convert::ToDouble(tmp[1]->Replace(".", ",")), Convert::ToDouble(tmp[2]->Replace(".", ",")), Convert::ToDouble(tmp[3]->Replace(".", ",")));
				continue;
			}
			if (tmp[0]->Equals("f")){
				this->face->addFace();
				for (int i = 1; i < tmp->Length; i++) {
					this->face->addToLast(Convert::ToInt32(tmp[i]));
				}
			}
		}
	}
}

array<String^>^ fileM::parse(String^ entry){
	String^ delimStr = " ";
	array<Char>^ delimiter = delimStr->ToCharArray();
	return entry->Split(delimiter);
}