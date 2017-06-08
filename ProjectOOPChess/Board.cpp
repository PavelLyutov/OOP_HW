#include "stdafx.h"
#include "Board.h"

using namespace std;

void Board::initFigures()
{
	figures = new figure**[8];
	for (int i = 0; i < 8; i++)
	{
		figures[i] = new figure*[8];
	}

	int counter = 2;
	for (int i = 6; i > 2; i--)
	{
		for (int j = 0; j < 8; j++)
		{
			figures[counter][j] = nullptr;
		}
		counter++;
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
			figures[6][i - 8] = &pawns[i];
		}
		else{
			figures[1][i] = &pawns[i];
		}
	}


	char tempP[3];
	tempP[0] = 'p';
	tempP[2] = '\0';
	for (int i = 0; i < 16; i++)
	{
		tempP[1] = (i + 41);
		if (i >= 8)
		{
			tempP[0] = 'P';
			pawns[i].setname(tempP); 
			pawns[i].setStatus(true);
			pawns[i].SetColor(White);
			pawns[i].setPosition(position(i - 8, 2));
            figures[6][i - 8] = &pawns[i];
		}
		else
		{
			
			tempP[1] = i + 49;
			pawns[i].setname(tempP);
			pawns[i].setStatus(true);
			pawns[i].SetColor(Black);
			pawns[i].setPosition(position(i, 7));

			figures[1][i] = &pawns[i];
		}
	}




	//White
	rooks[0].setStatus(true);
	rooks[0].SetColor(White);
	rooks[0].setPosition(position(1, 1));
	rooks[0].setname("R1");
	figures[7][0] = &rooks[0];

	rooks[1].setStatus(true);
	rooks[1].SetColor(White);
	rooks[1].setPosition(position(8,1));
	rooks[1].setname("R2");
	figures[7][7] = &rooks[1];



	//Black
	rooks[2].setStatus(true);
	rooks[2].SetColor(Black);
	rooks[2].setPosition(position(1, 8));
	rooks[2].setname("r1");
    figures[0][0] = &rooks[2];

	rooks[3].setStatus(true);
	rooks[3].SetColor(Black);
	rooks[3].setPosition(position(8, 8));
	rooks[3].setname("r2");
	figures[0][7] = &rooks[3];


	//White
	knights[0].setStatus(true);
	knights[0].SetColor(White);
	knights[0].setPosition(position(2, 1));
	knights[0].setname("K1");
	figures[7][1] = &knights[0];


	knights[1].setStatus(true);
	knights[1].SetColor(White);
	knights[1].setPosition(position(7, 1));
	knights[1].setname("K2");
	figures[7][6] = &knights[1];

	//Black
	knights[2].setStatus(true);
	knights[2].SetColor(Black);
	knights[2].setPosition(position(2, 8));
	knights[2].setname("k1");
	figures[0][1] = &knights[2];

	knights[3].setStatus(true);
	knights[3].SetColor(Black);
	knights[3].setPosition(position(7, 8));
	knights[3].setname("k2");
	figures[0][6] = &knights[3];

	//White
	bishops[0].setStatus(true);
	bishops[0].SetColor(White);
	bishops[0].setPosition(position(3, 1));
	bishops[0].setname("B1");
	figures[7][2] = &bishops[0];

	bishops[1].setStatus(true);
	bishops[1].SetColor(White);
	bishops[1].setPosition(position(6, 1));
	bishops[1].setname("B2");
	figures[7][5] = &bishops[1];


	//Black
	bishops[2].setStatus(true);
	bishops[2].SetColor(Black);
	bishops[2].setPosition(position(3, 8));
	bishops[2].setname("b1");
	figures[0][2] = &bishops[2];

	bishops[3].setStatus(true);
	bishops[3].SetColor(Black);
	bishops[3].setPosition(position(6, 8));
	bishops[3].setname("b2");
	figures[0][5] = &bishops[3];


	//White
    queen[0].setStatus(true);
	queen[0].SetColor(White);
	queen[0].setPosition(position(4, 1));
	queen[0].setname("Q1");
	figures[7][3] = &queen[0];

	//Black
	queen[1].setStatus(true);
	queen[1].SetColor(Black);
	queen[1].setPosition(position(4, 8));
	queen[1].setname("q1");
	figures[0][3] = &queen[1];

	//White
	king[0].setStatus(true);
	king[0].SetColor(White);
	king[0].setPosition(position(5, 1));
	king[0].setname("C1");//car
	figures[7][4] = &king[0];
	king[1].setStatus(true);
	king[1].SetColor(Black);
	king[1].setPosition(position(5, 1));
	king[1].setname("c1");//car
	figures[0][4] = &king[1];

}

void Board::print()
{
	for (int i = 0; i < 8; i++)
	{
		cout << i << "   ";
		for (int j = 0; j < 8; j++)
		{
			if (figures[i][j] == nullptr)
			{
				cout << "^  " ;
			}
			else
			{
				cout << figures[i][j]->getname() << " ";
			}

		}
		cout << endl;
	}

	cout << "\n    " << "0  1  2  3  4  5  6  7" << endl;
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

void Board::move(char* name, int x, int y)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (figures[i][j] != nullptr)
			{
				if (!strcmp(name, figures[i][j]->getname()))
				{
					if (figures[i][j]->rules(x, y))
					{
					
						figures[x][y] = figures[i][j];
						figures[i][j] = nullptr;
					}
					
				}
			}
		}

		

	}

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
	delete[] bishops;
	delete[] king;
	delete[] queen;
	delete[]knights;
	delete[]pawns;
	delete[]rooks;
	delete[]figures;
}