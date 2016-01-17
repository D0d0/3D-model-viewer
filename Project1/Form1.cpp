#include "Form1.h"
#include "fileM.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Project1::Form1(args));
	return 0;
}