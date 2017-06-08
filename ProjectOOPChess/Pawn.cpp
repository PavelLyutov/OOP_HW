#include "stdafx.h"
#include "Pawn.h"
#include "iostream"


bool Pawn::rules(int x, int y)
{
	if (this->GetColor() == White)
	{
		if (x > 7 || x < 0 || y > 7 || y < 0)
		{
			std::cout << "vyvedete novi koordinati" << std::endl;
			return false;
		}
		else if (this->getPosition().getX() - 1 == x && this->getPosition().getY() == y)
		{
			this->setPosition(position(x, y));
			return true;
		}
	}
	else //za cherni pishki
	{

	}
	//return false;
}