#include "Header.h";
using namespace std;


//create list
void InitDS(LIST& list)
{
	list.pFirst = list.pLast = NULL;
}

//create NODE
GAME* CreateGAME(Gacha data)
{
	GAME* game = new GAME;
	if (game == NULL)
		return NULL;
	game->data = data;
	game->pNext = NULL;
}

//check if empty or not
bool IsEmpty(LIST list)
{
	if (list.pFirst == NULL)
		return true;
	return false;
}

//add data to node
void AddFirst(LIST& list, GAME* pGame)
{
	if (IsEmpty(list))
	{
		list.pFirst = pGame;
	}
	else
	{
		pGame->pNext = list.pFirst;
		list.pFirst = pGame;
	}
}

//extract data
void PrintList(LIST list)
{
	
	if (IsEmpty(list))
	{
		cout << "Have a pussy italia" << endl;
	}
	else
	{
		GAME* pGame = list.pFirst;
		while (pGame != NULL)
		{
			cout << pGame->data.pity << endl;
			cout << pGame->data.primogems << endl;
			pGame = pGame->pNext;
		}
	}
	
}