#include "Team.h"
Team::Team()
{
	setNumOfPlayers(0);
	setPlayers(NULL);
	setCoachName("No Name Assigned");
	setCoachRating(0);
}
Team::Team(int newNumOfPlayers, Player * newPlayers,char * newCoachName, int newCoachRating)
{
	setNumOfPlayers(newNumOfPlayers);
	setPlayers(newPlayers);
	setCoachName(newCoachName);
	setCoachRating(newCoachRating);
}
void Team::setNumOfPlayers(int newNumOfPlayers)
{
	NumOfPlayers = newNumOfPlayers;
}

void Team::setPlayers(Player *newPlayers)
{
	for (size_t i = 0; i < NumOfPlayers; i++)
	{
		Players[i] = newPlayers[i];
	}
}
void Team::setCoachName(char *newCoachName)
{
	delete[] CoachName;
	CoachName = new char[strlen(newCoachName) + 1];
	strcpy(CoachName,newCoachName);

}
void Team::setCoachRating(int newCoachRating)
{
	CoachRating = newCoachRating;
}
