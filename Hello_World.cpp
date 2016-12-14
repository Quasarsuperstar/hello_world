// Hello_World.cpp : needlessly complicated hello world program
//

#include "stdafx.h"
#include "helloworld.h"

int _tmain(int argc, _TCHAR* argv[])
{

	helloworld * hworld = new helloworld("World");
	hworld->call();
	delete hworld;

	helloworld * hells = new helloworld();
	hells->call();
	delete hells;

	system("pause");
	return 0;
}

