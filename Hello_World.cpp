// Hello_World.cpp : needlessly complicated hello world program
//

#include "stdafx.h"
#include <iostream>
#include <string>

class helloworld {
private:
	std::string eyo;
public:
	virtual void call();
	helloworld(std::string str){
		eyo = str;
	}
	helloworld(){
		eyo = "Steve";
	}
	~helloworld(){
		std::cout << "!\n";
	}
};

void helloworld::call(){
	std::cout << "Hello " << eyo;
}

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

