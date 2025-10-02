#pragma once
#include "math.h"
#include <windows.h>
#include <iostream>

inline std::uint64_t base = reinterpret_cast<std::uint64_t>(GetModuleHandleA("sauerbraten.exe"));

struct offsets
{
	std::uint64_t* localPlayer;
	std::uint64_t* entList;
	int* numMonsters;
	int* numKilled;

	offsets(std::uint64_t baseAddr)
	{
		localPlayer = reinterpret_cast<std::uint64_t*>(baseAddr + 0x2A5730);
		entList = reinterpret_cast<std::uint64_t*>(baseAddr + 0x346D70);
		numMonsters = reinterpret_cast<int*>(baseAddr + 0x2A5788);
		numKilled = reinterpret_cast<int*>(baseAddr + 0x2A578C);
	}
};


struct wpAmmo
{
	int pistol;
	int shotgun;
	int rifle;
	int grenadeLauncher;
	int rockets;
	int minigun;
};

class Player
{
public:
	int health;
	int armor;
	wpAmmo weaponAmmo;
	float FOV;
	Vector3 position;
};

enum entType
{
	OGRO = 0,
	RHINO = 1,
	RATA = 2,
	SLITH = 3,
	BAUUL = 4,
	HELLPIG = 5,
	KNIGHT = 6,
	GOBLIN = 7,
	SPIDER = 8
};

class Entity
{
public:
	int health;
	Vector3 position;
	entType monsterType;
};
