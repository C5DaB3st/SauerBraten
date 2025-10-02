#include "hacks.h"

void WINAPI hack()
{
	while (!GetAsyncKeyState(VK_END) && 0x01)
	{

	}
}

BOOL WINAPI DllMain(HINSTANCE hInst, LPVOID lpvReserved, DWORD fdwReason)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(hack), nullptr, 0, nullptr);
		break;
	}
	return true;
}