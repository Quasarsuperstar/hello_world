#include "stdafx.h"
#include "helloworld.h"



helloworld::~helloworld()
{
	std::cout << "!\n";
}

helloworld::helloworld(std::string str){
	eyo = str;
}

void helloworld::call(){
	std::cout << "Hello " << eyo;
}