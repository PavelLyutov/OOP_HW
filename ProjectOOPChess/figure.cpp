#pragma once
#include "stdafx.h"
#include "figure.h"


void figure::copy(figure const& other)
{
	setPosition(other.CurrentPosition);
	SetColor(other.figureColor);
	setStatus(other.status);
}

figure::figure()
	{
		status = true;
		CurrentPosition;
		positions = new position[1];
	}
figure::figure(bool _status, FigureColor _color, position _CurrentPosition)
	{
		this->setStatus(_status);
		this->SetColor(_color);
		this->setPosition(_CurrentPosition);
	}

bool figure::getStatus() const
	{
		return this->status;
	}
void figure::setStatus(bool newStatus)
	{
		this->status = newStatus;
	}
FigureColor figure::GetColor() const
	{
		return this->figureColor;
	}
void figure::SetColor(FigureColor _figureColor)
	{
		this->figureColor = _figureColor;
	}

void figure::setPosition(position _position)
	{
		this->CurrentPosition.setX(_position.getX());
		this->CurrentPosition.setY(_position.getY());
	}

position figure::getPosition()  const
	{
		return this->CurrentPosition;
	}

figure::figure(figure const&other)
{
	copy(other);
}

figure& figure::operator=(figure const& other)
{
	copy(other);
	
	return *this;

}

void figure::addPosition(position const& _newposition)
{
	if (positionSize == positionCap - 1)
	{
		resize();
	}

	positionSize++;
	positions[positionSize] = _newposition;

}

void figure::setname(char* _name)
{
	name = new char[3];
	strcpy(name, _name);
}
char* figure::getname() const
{
	return name;
}

void figure::resize()
{

	positionCap*= 2;

	position *temp = new position[positionCap];

	for (int i = 0; i <= positionSize; i++)
	{
		temp[i] = positions[i];
	}

	delete[] positions;
	positions = temp;
}

figure::~figure()
{
	delete[] name;
	delete[] positions;
}