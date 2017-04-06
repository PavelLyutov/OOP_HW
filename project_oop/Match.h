#pragma once
#include<iostream>
#include<cstring>
#include "Team.h"

class Match
{
private:
	Team Team1;
	Team Team2;
	const int FirstHalf = 45;
	const int SecondHalf = 45;
	int Team1Goals;
	int Team2Goals;


public:
	Match();
	Match(Team newTeam1, Team newTeam2, int newHomeGoals,int newGuestGoals);

    void setTeam1(Team newTeam1);
	void setTeam2(Team newTeam2);
	void setTeam1Goals(int newTeam1Goals);
	void setTeam2Goals(int newTeam2Goals);

	int getTeam1Goals() const;
	int getTeam2Goals() const;

};
