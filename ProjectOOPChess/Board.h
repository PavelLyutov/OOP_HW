#pragma once
#include <iostream>
#include "stdafx.h"
#include <string.h>
#include "figure.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"
#include "Rook.h"
#include "Pawn.h"
using namespace std;
const int PAWNS = 16;
const int FIGURES = 4;
const int ROYAL = 2;
enum Color{ Whites, Blacks };
enum Status{check, notcheck, checkmate};
class Board
{ 
	figure ***figures;
	Bishop *bishops;
	Knight *knights;
	Queen *queen;
	King *king;
	Rook *rooks;
	Pawn *pawns;
	Color currentColor;
	Status boardStatus;
	void free();
	void initFigures();
	void LoadingFigures();
	void copyBoardFigures(Board const& other);

public:
	Board(); 
	void setCurrent(Color);
	Color getCurrent() const;
	void move(char*, int, int);
	Board::Board(Board const& other);
	Board& Board::operator=(Board const& other);
	void print();
	

	~Board();

};