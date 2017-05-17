#include "Pawn.h"


void Pawn::copy(Pawn const& other)
{
	setCondition(other.Condition);
}

Pawn::Pawn()
{
	//Condition;
}
Pawn::Pawn(Figure _Condition)
{
	setCondition(_Condition);
}
void Pawn::setCondition(Figure _Condition)
{
	this->Condition.SetColor(_Condition.GetColor());
	this->Condition.setPosition(_Condition.getPosition());
	this->Condition.setStatus(_Condition.getStatus());

}

Figure Pawn::GetCondition() const
{
	return this->Condition;
}
Pawn::Pawn(Pawn const& other)
{
	copy(other);
}

Pawn& Pawn::operator=(Pawn const& other)
{
	copy(other);
	return *this;
}
Pawn::~Pawn()
{

}
