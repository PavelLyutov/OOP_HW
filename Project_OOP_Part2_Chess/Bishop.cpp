#include "Bishop.h"


void Bishop::copy(Bishop const& other)
{
	setCondition(other.Condition);
}

Bishop::Bishop()
{
	//Condition;
}
Bishop::Bishop(Figure _Condition)
{
	setCondition(_Condition);
}
void Bishop::setCondition(Figure _Condition)
{
	this->Condition.SetColor(_Condition.GetColor());
	this->Condition.setPosition(_Condition.getPosition());
	this->Condition.setStatus(_Condition.getStatus());

}

Figure Bishop::GetCondition() const
{
	return this->Condition;
}
Bishop::Bishop(Bishop const& other)
{
	copy(other);
}

Bishop& Bishop::operator=(Bishop const& other)
{
	copy(other);
	return *this;
}
Bishop::~Bishop(){
}
