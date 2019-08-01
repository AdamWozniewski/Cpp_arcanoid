#include "Author.h"
#include "GameBoard.h"
#include "Welcome.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Arcanoid;

void closeWindow(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(closeWindow);
}
[STAThreadAttribute]
int Main(array <String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Welcome^ firstView = gcnew Welcome();
	firstView->FormClosed += gcnew FormClosedEventHandler(closeWindow);
	firstView->Show();
	Application::Run();
	return 0;
}