#pragma once

#include "Figure.h"
class Rook:public Figure
{
	Figure Condition;
	void copy(Rook const& other);
public:
	Rook();
	Rook(Figure _Condition);
	Rook(Rook const& other);
	Rook& operator=(Rook const& other);
	~Rook();


	void setCondition(Figure _Condition);
	Figure GetCondition() const;
	//there will be some method for the movement of the current fiugre, not sure how though :D

};

