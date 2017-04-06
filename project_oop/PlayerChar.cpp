#include "PlayerChar.h"

PlayerChar::PlayerChar()
{
	setHeight(0);
	setWeight(0);
	this->StrongerFoot=None1;
}

PlayerChar::PlayerChar(int newHeight,int newWeight, Foot newStrongerFoot)
{
	Height = newHeight;
	Weight=newWeight;
	StrongerFoot = newStrongerFoot;
}
void PlayerChar::setHeight(int newHeight)
{
	this->Height= newHeight;
}
void PlayerChar::setWeight(int newWeight)
{
	this->Weight= newWeight;
}
void PlayerChar::setStrongerFoot(Foot newStrongerFoot)
{
	this->StrongerFoot = newStrongerFoot;
}
int PlayerChar::getWeight() const
{
	return Weight;
}
int PlayerChar::getHeight() const
{
	return Height;
}
char* ReturnStrongerFoot(Foot foot)
{
	switch (foot)
	{
	case 1: return "Left"; break;
	case 2: return "Right"; break;
	default: return "None"; break;
	}
}
