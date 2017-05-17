#pragma once

#include "Figure.h"


void Figure::copy(Figure const& other)
{
	setPosition(other.CurrentPosition);
	SetColor(other.FigureColor);
	setStatus(other.status);
}

Figure::Figure()
	{
		status = true;
		CurrentPosition;
	}
Figure::Figure(bool _status, Color _color, Position _CurrentPosition)
	{
		this->setStatus(_status);
		this->SetColor(_color);
		this->setPosition(_CurrentPosition);
	}

bool Figure::getStatus() const
	{
		return this->status;
	}
void Figure::setStatus(bool newStatus)
	{
		this->status = newStatus;
	}
Color Figure::GetColor() const
	{
		return this->FigureColor;
	}
void Figure::SetColor(Color _FigureColor)
	{
		this->FigureColor = _FigureColor;
	}

void Figure::setPosition(Position _position)
	{
		this->CurrentPosition.setX(_position.getX());
		this->CurrentPosition.setY(_position.getY());
	}

Position Figure::getPosition()  const
	{
		return this->CurrentPosition;
	}

Figure::Figure(Figure const&other)
{
	copy(other);
}

Figure& Figure::operator=(Figure const& other)
{
	copy(other);

	return *this;

}
Figure::~Figure()
{

}
