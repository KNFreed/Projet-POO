#include "GestionPersonnel.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall GestionPers(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project9::GestionPersonnel GestionPersonnel;
	return 0;
}