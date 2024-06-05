#include "MyForm.h"
#include<iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void StartApplication() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew WordCounter::MyForm);
}

// You can also use int main() if required by your environment
// This is just an example to use a different function name
int main() {
    StartApplication();
    return 0;
}
