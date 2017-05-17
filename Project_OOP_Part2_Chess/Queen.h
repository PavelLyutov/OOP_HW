#pragma once

#include "Figure.h"
class Queen:public Figure
{
	Figure Condition;
	void copy(Queen const& other);
public:
	Queen();
	Queen(Figure _Condition);
	Queen(Queen const& other);
	Queen& operator=(Queen const& other);
	~Queen();

	void setCondition(Figure _Condition);
	Figure GetCondition() const;


};
