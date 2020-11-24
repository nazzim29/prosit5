#include "Main.h"
#include <windows.h>

using namespace System::Windows::Forms;
using namespace testWin;
int WINAPI WinMain(HINSTANCE,HINSTANCE,LPSTR,int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	testWin::Main monFormulaire;
	Application::Run(% monFormulaire);
	return 0;
}


