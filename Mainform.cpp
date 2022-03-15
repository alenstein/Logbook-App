#include "Mainform.h"
#include "StudentDashboard.h"

#include <iostream>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Logbook::Mainform form;
	Application::Run(% form);
}