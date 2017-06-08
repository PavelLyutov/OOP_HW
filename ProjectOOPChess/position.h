#pragma once
#include "stdafx.h"
#include <string.h>



struct position
{
	int x;
	int y;
	position();
	position(int, int);
	void setX(int);
	void setY(int);
	int getX() const;
	int getY() const;
};