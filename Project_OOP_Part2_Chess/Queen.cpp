#include "Queen.h"


void Queen::copy(Queen const& other)
{
	setCondition(other.Condition);
}

Queen::Queen()
{
	//Condition;
}
Queen::Queen(Figure _Condition)
{
	setCondition(_Condition);
}
void Queen::setCondition(Figure _Condition)
{
	this->Condition.SetColor(_Condition.GetColor());
	this->Condition.setPosition(_Condition.getPosition());
	this->Condition.setStatus(_Condition.getStatus());

}

Figure Queen::GetCondition() const
{
	return this->Condition;
}
Queen::Queen(Queen const& other)
{
	copy(other);
}

Queen& Queen::operator=(Queen const& other)
{
	copy(other);
	return *this;
}

Queen::~Queen()
{

}
