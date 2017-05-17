#pragma once

#include "Figure.h"
class King:public Figure
{
private:

	Figure Condition;
	void copy(King const& other);
public:
	King();
	King(Figure _Condition);
	King(King const& other);
	King& operator=(King const& other);
	~King();



	void setCondition(Figure _Condition);
	Figure GetCondition() const;
	//there will be some method for the movement of the current fiugre,at least interation

};
