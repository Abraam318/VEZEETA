#include "Login_Sign.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	VEZEETA::Login_Sign Form;
	Application::Run(% Form);


}