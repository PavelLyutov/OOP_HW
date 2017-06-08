#include "stdafx.h"
#include "position.h"


void position::setX(int _x)
{
	this->x = _x;
}

void position::setY(int _y)
{
	this->y = _y;
}

position::position()
{
	x = 0;
	y = 0;
}

position::position(int _x, int _y)
{
	setX(_x);
	setY(_y);
}
int position::getX() const
{
	return x;
}

int position::getY() const
{
	return y;
}