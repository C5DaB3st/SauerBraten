#include "hacks.h"

void WINAPI hack()
{
	createConsole();

	setConsoleColor(0, 255, 0);
	std::cout << "INJECTED SUCCESFULLY" << std::endl;

	while (true)
	{
		if (Init())
		{
		}
		else if (GetAsyncKeyState(VK_END) && 0x01)
		{
			break;
		}
		else
		{
			std::cout << "INITALIZAION FAILED TRYING AGAIN! PRESS ESC TO CLOSE APP!" << std::endl;
			continue;
		}
	}
}

BOOL WINAPI DllMain(HINSTANCE hInst, DWORD fdwReason, LPVOID lpvReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(hack), nullptr, 0, nullptr);
		break;
	}
	return true;
}
