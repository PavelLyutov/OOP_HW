#pragma once
#include<iostream>
#include<cstring>
enum  Foot {None1, Left, Right};
class PlayerChar{
private:
    int Height;
    int Weight;
    Foot StrongerFoot;
public:
    PlayerChar();
	PlayerChar(int newHeight,int Weight,Foot newStrongerFoot);

	void setHeight(int newHeight);
	void setWeight(int newWeight);
	void setStrongerFoot(Foot newStrongerFoor);

	int getHeight() const;
	int getWeight() const;
	char* getStrongerFoot() const;

};

