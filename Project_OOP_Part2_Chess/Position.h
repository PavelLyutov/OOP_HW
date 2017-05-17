#pragma once

#include <string.h>



struct Position
{
	int x;
	int y;
	void setX(int);
	void setY(int);
	int getX() const;
	int getY() const;
};
