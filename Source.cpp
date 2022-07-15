#include "Header.h";

int main()
{
	LIST list;
	Gacha data ={69};
	GAME* game = CreateGAME(data);
	InitDS(list);
	PrintList(list);

	system("pause");
	return 0;
}