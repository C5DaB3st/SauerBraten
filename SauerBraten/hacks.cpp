#include "hacks.h"

offsets* gameOffsets = nullptr;

void createConsole()
{
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);
}

void setConsoleColor(int r, int g, int b)
{
	printf("\x1b[38;2;%d;%d;%dm", r, g, b); // foreground RGB
}

bool Init()
{
	if (base)
	{
		gameOffsets = new offsets(base);
		//if localPlayer is false dont run the game loop because then it will crash
		if (gameOffsets->localPlayer = reinterpret_cast<std::uint64_t*>(base + gameOffsets->localPlayer))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void loopThroughEntList()
{

}

void tpToPlayer()
{

}
