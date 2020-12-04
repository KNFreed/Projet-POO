#include "EcranPrincipal.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall MainDeux(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project9::FormEcranPrincipal FormEcranPrincipal;
	Application::Run(% FormEcranPrincipal);
	return 0;
}