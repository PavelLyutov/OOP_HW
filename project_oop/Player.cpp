
#include "Player.h"


Player::Player()
{
	this->setFirstName("");
	this->setLastName("");
	this->setNationality("");
	this->setTeam("");
	this->Age = 0;

	this->FieldPosition = None;

	this->Rating = 0;
}

Player::Player(char * newFirstName, char * newLastName, char * newNationality,int newAge,char* newTeam,Position newFieldPosition,int newRating)
{
	this->setFirstName(newFirstName);
	this->setLastName(newLastName);
	this->setNationality(newNationality);
	this->setTeam(newTeam);
	Age = newAge;
	FieldPosition = newFieldPosition;
	Rating =newRating;
}

    void Player::setFirstName(char* newFirstName)
{
	if (newFirstName != NULL)
	{
		FirstName = new char[strlen(newFirstName) + 1];
		strcpy(FirstName, newFirstName) ;
	}
}

void Player::setLastName(char * newLastName)
{
    if (newLastName != NULL)
    {
	LastName = new char[strlen(newLastName) + 1];
	strcpy(LastName,newLastName);
	}
}
void Player::setNationality(char * newNationality)
{
	Nationality = new char[strlen(newNationality) + 1];
	strcpy(Nationality,newNationality);
}

void Player::setTeam(char * newTeam)
{
	Team = new char[strlen(newTeam) + 1];
	strcpy(Team,newTeam);
}
void Player::setAge(int newAge)
{
	Age = newAge;
}
void Player::setPosition(Position newFieldPosition)
{
	FieldPosition = newFieldPosition;
}
void Player::setRating(int newRating)
{
	Rating = newRating;
}

char * Player::getFirstName() const
{
	return FirstName;
}
char * Player::getLastName() const
{
	return LastName;
}
char * Player::getNationality() const
{
	return Nationality;
}

char * Player::getTeam() const
{
	return Team;
}
int Player::getAge() const
{
	return Age;
}
char* ReturnPosition(Position pos)
{
	switch (pos)
	{
    case 1: return "Goalkeeper"; break;
	case 2: return "Defender"; break;
	case 3: return "Middlefielder"; break;
	case 4: return "Striker"; break;
	default: return "None"; break;
	}
}
int Player::getRating() const
{
	return Rating;
}
