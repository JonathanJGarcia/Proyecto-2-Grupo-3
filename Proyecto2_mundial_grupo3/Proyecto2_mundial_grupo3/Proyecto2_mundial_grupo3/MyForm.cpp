#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

//[STAThreadAttribute]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2mundialgrupo3::MyForm form;
	Application::Run(% form);
	return 0;
}



