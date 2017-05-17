
#include "Knight.h"


void Knight::copy(Knight const& other)
{
	setCondition(other.Condition);
}

Knight::Knight()
{
	//Condition;
}
Knight::Knight(Figure _Condition)
{
	setCondition(_Condition);
}
void Knight::setCondition(Figure _Condition)
{
	this->Condition.SetColor(_Condition.GetColor());
	this->Condition.setPosition(_Condition.getPosition());
	this->Condition.setStatus(_Condition.getStatus());

}

Figure Knight::GetCondition() const
{
	return this->Condition;
}
Knight::Knight(Knight const& other)
{
	copy(other);
}

Knight& Knight::operator=(Knight const& other)
{
	copy(other);
	return *this;
}
Knight::~Knight()
{

}
