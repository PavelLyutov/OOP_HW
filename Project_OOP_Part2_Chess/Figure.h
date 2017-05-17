#pragma once

#include "Position.h"

enum Color{None, White, Black };

class Figure
{
private:

	Position CurrentPosition;
	bool status;
	Color FigureColor;
	void copy(Figure const& other);
public:
	Figure();
	Figure(bool _status, Color _color, Position _CurrentPosition);
	Figure(Figure const& other);
	Figure& operator=(Figure const& other);
	~Figure();

	bool getStatus() const;
	Color GetColor() const;
	Position getPosition()  const;


	void SetColor(Color _FigureColor);
	void setPosition(Position _position);
	void setStatus(bool newStatus);
};
