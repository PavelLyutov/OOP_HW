#include "Rook.h"


void Rook::copy(Rook const& other)
{
	setCondition(other.Condition);
}

Rook::Rook()
{
	//Condition;
}
Rook::Rook(Figure _Condition)
{
	setCondition(_Condition);
}
void Rook::setCondition(Figure _Condition)
{
	this->Condition.SetColor(_Condition.GetColor());
	this->Condition.setPosition(_Condition.getPosition());
	this->Condition.setStatus(_Condition.getStatus());

}

Figure Rook::GetCondition() const
{
	return this->Condition;
}
Rook::Rook(Rook const& other)
{
	copy(other);
}

Rook& Rook::operator=(Rook const& other)
{
	copy(other);
	return *this;
}
Rook::~Rook()
{

}
