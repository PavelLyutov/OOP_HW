#include "Soldiar.h"
Soldiar::Soldiar()
{
    SetName("");
    SetAtackPoints(0);
    SetDefensePoints(0);
}



Soldiar::Soldiar(char* _Name, int _AtackPoints , int _DefensePoints)
{
    SetName(_Name);
    SetAtackPoints(_AtackPoints);
    SetDefensePoints(_DefensePoints);
}

Soldiar::~Soldiar()
{
    delete[] Name;
}
/*
Soldiar::Soldiar(const Soldiar& other)
{
    //copy ctor
}

Soldiar& Soldiar::operator=(const Soldiar& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
*/

char* Soldiar::GetName() const
{
    return Name;
}
int Soldiar::GetAtackPoints() const
{
    return AtackPoints;
}
int Soldiar::GetDefensePoints() const
{
    return DefensePoints;
}


void Soldiar::SetName(char* _Name)
{
	delete[] Name;
	Name = new char[strlen(_Name) + 1];
	strncpy(this->Name, _Name, 10);

}
void Soldiar::SetAtackPoints(int _AtackPoints)
{
    AtackPoints = _AtackPoints;
}
void Soldiar::SetDefensePoints(int _DefensePoints)
{
    DefensePoints = _DefensePoints;
}
