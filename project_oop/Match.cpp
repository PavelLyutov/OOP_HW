#include "Match.h"



Match::Match()
{

this->Team1Goals = 0;
this->Team2Goals = 0;
}


Match::Match(Team newTeam1, Team newTeam2, int newTeam1Goals, int newTeam2Goals)
{
	Team1 = newTeam1;
	Team2 = newTeam2;
	Team1Goals = newTeam1Goals;
	Team2Goals = newTeam2Goals;
}
void Match::setTeam1(Team newTeam1)
{
	Team1 = newTeam1;
}

void Match::setTeam2(Team newTeam2)
{
	Team2 = newTeam2;
}

void Match::setTeam1Goals(int newTeam1Goals)
{
	Team1Goals = newTeam1Goals;
}

void Match::setTeam2Goals(int newTeam2Goals)
{
	Team2Goals = newTeam2Goals;
}

int Match::getTeam1Goals() const
{
    return Team1Goals;
}

int Match::getTeam2Goals() const
{
    return Team2Goals;
}
