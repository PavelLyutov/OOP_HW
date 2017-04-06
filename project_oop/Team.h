#pragma once
#include "Player.h"
#include <string>


class Team
{
private:
	size_t NumOfPlayers;
	Player *Players;
	char *CoachName;
	int CoachRating;

public:
	Team();
	Team(int newNumOfPlayers, Player *newPlayers,
		char* newCoachName, int newCoachRating);

	void setNumOfPlayers(int newNumOfPlayers);
	void setPlayers(Player *newPlayers);
	void setCoachName(char *newCoachName);
	void setCoachRating(int newCoachRating);


};
