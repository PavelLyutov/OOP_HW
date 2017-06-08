#pragma once
#include "stdafx.h"
#include "position.h"

enum FigureColor{ White, Black };


class figure
{
	position CurrentPosition;
	bool status;
	FigureColor figureColor;
	position* positions;
	int positionSize;
	int positionCap;
	char* name;
	void copy(figure const& other);
public:
	figure();
	figure(bool _status, FigureColor _color, position _CurrentPosition);
	figure(figure const& other);
	figure& operator=(figure const& other);
	~figure();

	bool getStatus() const;
	FigureColor GetColor() const;
	position getPosition()  const;
	char* getname() const;
	void setname(char*);
	void setStatus(bool newStatus);
	void SetColor(FigureColor _FigureColor);
	void setPosition(position _position);
	void addPosition(position const& other);
	void resize();
	virtual bool rules(int, int) = 0;

};