#pragma once
#include <iostream>;
using namespace std;

struct Gacha
{
	int primogems;
	int pity;
};

struct GAME
{
	Gacha data;
	GAME* pNext;
};

struct LIST
{
	GAME* pFirst;
	GAME* pLast;
};


//create list
void InitDS(LIST& list);

//create node
GAME* CreateGAME(Gacha data);

//check if empty or not
bool IsEmpty(LIST list);

//add data to node
void AddFirst(LIST& list, GAME* pGame);

//extract data
void PrintList(LIST list);
