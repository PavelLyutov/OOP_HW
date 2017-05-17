#pragma once

#include <string.h>

#include "Figure.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"
#include "Rook.h"
#include "Pawn.h"
const int PAWNS = 16;
const int FIGURES = 4;
const int ROYAL = 2;


class Board
{
	Figure ** figures;
	Bishop *bishops;
	Knight *knights;
	Queen *queen;
	King *king;
	Rook *rooks;
	Pawn *pawns;
	Color currentColor;

	void free();
	void initFigures();
	void LoadingFigures();
	void copyBoardFigures(Board const& other);

public:
	Board();
	Board(Board const& other);
	Board& operator=(Board const& other);
	~Board();

	void setCurrent(Color);
	Color getCurrent() const;


};
