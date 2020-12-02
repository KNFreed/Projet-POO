//MyForm.cpp
#include "Connexion.h"
#include "EcranPrincipal.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project9::FormConnexion FormConnexion;
	Application::Run(% FormConnexion);
	return 0;
}