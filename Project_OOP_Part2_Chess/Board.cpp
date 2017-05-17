
#include "Board.h"


void Board::initFigures()
{
	figures = new Figure*[8];
	for (int i = 0; i < 8; i++)
	{
		figures[i] = new Figure[8];
	}
}
Color Board::getCurrent() const
{
	return currentColor;
}

void Board::LoadingFigures()
{
	bishops = new Bishop[FIGURES];
	king = new King[ROYAL];
	queen = new Queen[ROYAL];
	rooks = new Rook[FIGURES];
	knights = new Knight[FIGURES];
	pawns = new Pawn[PAWNS];

	for (int i = 0; i < 16; i++){
		if (i >= 8)
		{
			figures[6][i - 8] = pawns[i];
		}
		else{
			figures[1][i] = pawns[i];
		}
	}
	figures[7][7] = rooks[0];
	figures[0][7] = rooks[1];
    figures[0][0] = rooks[2];
	figures[7][0] = rooks[3];

	figures[7][1] = knights[0];
	figures[7][6] = knights[1];
	figures[0][1] = knights[2];
	figures[0][6] = knights[3];

	figures[7][2] = bishops[0];
	figures[7][5] = bishops[1];
	figures[0][3] = bishops[2];
	figures[0][5] = bishops[3];

	figures[7][3] = queen[0];
	figures[0][3] = queen[1];

	figures[7][4] = king[0];
	figures[0][4] = king[2];

}

Board::Board() :bishops(nullptr), queen(nullptr), king(nullptr), rooks(nullptr), pawns(nullptr), knights(nullptr)
{
	initFigures();
	LoadingFigures();
}


void Board::setCurrent(Color next)
{
	currentColor = next;
}

void Board::copyBoardFigures(Board const& other)
{

	this->setCurrent(other.currentColor);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			this->figures[i][j] = other.figures[i][j];
		}
	}
}
Board::Board(Board const& other)
{
	copyBoardFigures(other);
}

Board::~Board()
{
	free();
}

Board& Board::operator=(Board const& other)
{
	if (this != &other)
	{
		free();
		copyBoardFigures(other);
	}

	return *this;
}


void Board::free()
{
	for (int i = 0; i < 8; i++)
	{
		delete[] figures[i];
	}
	delete [] bishops;
	delete[] king;
	delete[] queen;
	delete[] knights;
	delete[] pawns;
	delete[] rooks;
	delete[] figures;
}




