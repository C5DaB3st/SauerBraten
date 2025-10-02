#pragma once
#include "math.h"

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