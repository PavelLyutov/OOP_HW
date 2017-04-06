#pragma once
#include <iostream>
#include <cstring>

enum  Position {None, Goalkeeper, Defender,Middlefielder, Striker};

class Player{
private:
    char* FirstName;
    char* LastName;
    char* Nationality;
    char* Team;
    int Age;
    Position FieldPosition;
    int Rating; // skills depends on last season performance from 1 to 100
public:
    Player();
    Player(char* newFirstName,char* newLastName,char* newNationality,int newAge,char* newTeam,Position newFieldPosition,int newRating);

    void setFirstName(char* newFirstName);
    void setLastName(char* newLastName);
    void setNationality(char* newNationality);
	void setTeam(char* newTeam);
	void setAge(int newAge);
	void setPosition(Position newFieldPosition);
	void setRating(int newRating);


	char* getFirstName() const;
	char* getLastName() const;
	char* getNationality() const;
	char* getTeam() const;
	int getAge() const;
	char* getFieldPosition() const;
	int getRating() const;


};

