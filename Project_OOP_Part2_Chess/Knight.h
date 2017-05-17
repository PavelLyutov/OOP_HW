#pragma once

#include "Figure.h"
class Knight:public Figure
{
	Figure Condition;
	void copy(Knight const& other);
public:
	Knight();
	Knight(Figure _Condition);
	Knight(Knight const& other);
	Knight& operator=(Knight const& other);
	~Knight(); // no dinamyc memory for now


	void setCondition(Figure _Condition);
	Figure GetCondition() const;
	//there will be some method for the movement of the current fiugre, in last interation

};
