#include "_MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OJPIIWindowsForms::_MainForm MainForm;
	Application::Run(%MainForm);
}