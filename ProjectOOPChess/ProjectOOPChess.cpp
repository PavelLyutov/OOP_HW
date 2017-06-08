// ProjectOOPChess.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Board.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Board MitakasMadafakas;
	MitakasMadafakas.print();
	MitakasMadafakas.move("P1", 5, 0);
	MitakasMadafakas.print();
	MitakasMadafakas.move("P1", 8, 0);
	MitakasMadafakas.move("P3", 5, 2);
	MitakasMadafakas.move("P4", 4, 3);
	MitakasMadafakas.print();

	system("Pause");
	return 0;
}

