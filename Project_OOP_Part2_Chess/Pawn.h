#pragma once

#include "Figure.h"
class Pawn: public Figure
{
	Figure Condition;
	void copy(Pawn const& other);
public:
	Pawn();
	Pawn(Figure _Condition);
	Pawn(Pawn const& other);
	Pawn& operator=(Pawn const& other);
	~Pawn();


	void setCondition(Figure _Condition);
	Figure GetCondition() const;
	//there will be some method for the movement of the current fiugre,in last interation

};
