#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace My645база;

[STAThread]
void main()
{
   
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ::MyForm form;
    Application::Run(% form);
}

