/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: d
 *
 * Created on 14 December 2016, 14:18
 */

#include <cstdlib>
// Hello_World.cpp : needlessly complicated hello world program
//

#include "stdafx.h"
#include "helloworld.h"

using namespace std;

int main(int argc, char** argv[])
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
