#include "trangdangnhap.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	quanlysv::trangdangnhap form;
	Application::Run(% form);
}

