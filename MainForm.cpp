#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	setlocale(LC_ALL, "Russian");
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	FNM::MainForm main;
	Application::Run(% main);
}
