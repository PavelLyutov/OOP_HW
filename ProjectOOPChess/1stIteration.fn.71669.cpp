// stdafx.cpp : source file that includes just the standard includes
// ProjectOOPChess.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include <iostream>
using namespace std;

struct position
{
	int x;
	int y;
	
	void setX(int _x)
	{
	
		this -> x = _x;
	}
	int getX() const
	{
		
		return this -> x;
	}
	void setY(int _y)
	{

	this ->	y = _y;
	}
	int getY() const
	{
     return this-> y
	};

enum Color{ White, Black };
enum Cordinates{a,b,c,d,e,f,g,h};

class Board
{
	Color currentColor;
public:
	Board(Color _currentColour)
	{
		currentColor = _currentColour;
	}
};

class figure
{
	position CurrentPosition;
	bool status;
	Color FigureColor;

public:
	
	figure()
	{
		status = true;
		CurrentPosition;
	}
	figure(bool _status, Color _color, position _CurrentPosition)
	{
		this->setStatus(_status);
		this->SetColor(_color);
		this->setPosition(_CurrentPosition);
	}

	bool getStatus() const
	{
		return this -> status;
	}
	void setStatus(bool newStatus)
	{
		this->status = newStatus;
	}
	Color GetColor() const
	{
		return this->FigureColor;
	}
	void SetColor(Color _FigureColor)
	{
		this->FigureColor = _FigureColor;
	}

	void setPosition(position _position)
	{
		this->CurrentPosition.setX(_position.getX());
		this->CurrentPosition.setY(_position.getY());
	}

	position getPosition()  const
	{
		return this -> CurrentPosition;
	}

};
class King
{
	figure Condition;

public:
	King()
	{
		Condition;
	}
	King(figure _Condition)
	{
		setCondition(_Condition);
	}
	void setCondition(figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condition.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}

	figure GetCondition()
	{
		return this->Condition;
	}
};

class Queen
{
	figure Condition;

public:
	Queen()
	{
		Condition;
	}
	Queen(figure _Condition)
	{
		this->setCondition(_Condition);
	}
	void setCondition(figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condinion.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}
	figure GetCondition()
	{
		return this-> Condition;
	}


};

class Knight
{
	figure Condition;

public:
	Knight()
	{
		Condition;
	}
	Knight(figure _Condition)
	{
		this->setCondition(_Condition);
	}

	void setCondition(figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condition.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}

	figure GetCondition()
	{
		return this->Condition;
	}


};

class Rook
{
	figure Condition;

public:
	Rook()
	{
		Condition;
	}
	Rook(figure _Condition)
	{
		this->setCondition(_Condition);
	}

	void setCondition(figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condition.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}

	figure GetCondition()
	{
		return this-> Condition;
	}


};
class Bishop
{
	figure Condition;

public:
	Bishop()
	{
		Condition;
	}
	Bishop(figure _Condition)
	{
		this->setCondition(_Condition);
	}
	void setCondition(figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condition.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}

	figure GetCondition()
	{
		return this->Condition;
	}


};

class Pawn
{
	figure Condition;

public:
	Pawn()
	{
		Condition;
	}
	Pawn(figure _Condition)
	{
		this->setCondition(_Condition);
	}
	void setCondition(figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condition.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}

	figure GetCondition()
	{
		return this-> Condition;
	}
};


int main()
{
	system("PAUSE");
	return 0;
}