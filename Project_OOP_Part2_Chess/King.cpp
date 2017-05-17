#include "King.h"


void King::copy(King const& other)
{
	setCondition(other.Condition);
}

King::King()
	{
		//Condition;
	}
King::King(Figure _Condition)
	{
		setCondition(_Condition);
	}
void King::setCondition(Figure _Condition)
	{
		this->Condition.SetColor(_Condition.GetColor());
		this->Condition.setPosition(_Condition.getPosition());
		this->Condition.setStatus(_Condition.getStatus());

	}

Figure King::GetCondition() const
	{
		return this->Condition;
	}
King::King(King const& other)
{
	copy(other);
}

King& King::operator=(King const& other)
{
	copy(other);
	return *this;
}
King::~King()
{

}
