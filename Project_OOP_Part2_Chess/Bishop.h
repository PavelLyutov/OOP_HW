#pragma once

#include "Figure.h"
class Bishop:public Figure
{
	Figure Condition;
	void copy(Bishop const& other);
public:
	Bishop();
	Bishop(Figure _Condition);
	Bishop(Bishop const& other);
	Bishop& operator=(Bishop const& other);
	~Bishop();


	void setCondition(Figure _Condition);
	Figure GetCondition() const;
	//there will be some method for the movement of the current fiugre, not sure how though :D

};
