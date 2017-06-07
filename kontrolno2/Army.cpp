#include"Army.h"


Army::Army(char* _Name,Soldiar* _Soldiars,size_t _NumberOfSoldiars)
{
    setArmyName(_Name);
    setSoldiars(_Soldiars,_NumberOfSoldiars);

}
Army::~Army()
{
    delete[] Name;
}

char* Army::getArmyName() const
{
    return Name;
}

void Army::setArmyName(char* _Name)
{
    delete[] Name;
	Name = new char[strlen(_Name) + 1];
	strncpy(this->Name, _Name, 10);

}
void Army::setSoldiars(Soldiar* _Soldiars,size_t _NumberOfSoldiars)
{
    delete[] Soldiars;

    if (_Soldiars != nullptr && _NumberOfSoldiars > 0)
    {
        Capacity = NumberOfSoldiars = _NumberOfSoldiars;
        Soldiars = new Soldiar[_NumberOfSoldiars];
        for (size_t i = 0; i < NumberOfSoldiars; i++)
        {
            Soldiars[i] = _Soldiars[i];
        }
    }
    else
    {
        Soldiars = nullptr;
        NumberOfSoldiars = 0;
        Capacity = 0;
    }
}


void Army::setCapacity(size_t _Capacity)
{


    if (_Capacity > Capacity)
    {
        Capacity = _Capacity;
        Soldiar* _Soldiars = new Soldiar[Capacity];
        for (size_t i = 0; i < NumberOfSoldiars; i++)
        {
           _Soldiars[i] = Soldiars[i];
        }
        delete[] Soldiars;
        Soldiars = _Soldiars;
    }

}
