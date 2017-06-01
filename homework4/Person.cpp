#include "Person.h"
#include<cstring>
Person::Person(char* _Name,char* _Adress,int _Number)
{
    Name = nullptr;
    Adress = nullptr;
    SetName(_Name);
    SetAdress(_Adress);
    SetNumber(_Number);

}


Person::~Person()
{
   delete[] Name;
   delete[] Adress;
}

Person::Person(const Person& other)
{
    Name = nullptr;
    Adress = nullptr;
    SetName(other.Name);
    SetAdress(other.Adress);
    SetNumber(other.Number);

}

Person& Person::operator=(const Person& rhs)
{
    if (this == &rhs) return *this;
    SetName(rhs.Name);
    SetAdress(rhs.Adress);
    SetNumber(rhs.Number);

    return *this;
}


char* Person::GetName() const
{
    return Name;
}
char* Person::GetAdress()   const
{
    return Adress;
}
int Person::GetNumber()  const
{
    return Number;
}


void Person::SetName(char* _Name)
{
    delete[] Name;
    if (_Name != nullptr)
    {
        size_t len = strlen(_Name);
        if (strlen(_Name) != 0)
        {
            Name = new char[len + 1];
            strcpy(Name, _Name);
        }
        else
        {
            Name = new char[1];
            Name[0] = '\0';
        }
    }
    else
    {
        Name = new char[1];
        Name[0] = '\0';
    }
}

void Person::SetAdress(char* _Adress)
{
        delete[] Adress;
    if (_Adress != nullptr)
    {
        size_t len = strlen(_Adress);
        if (strlen(_Adress) != 0)
        {
            Name = new char[len + 1];
            strcpy(Adress, _Adress);
        }
        else
        {
            Adress = new char[1];
            Adress[0] = '\0';
        }
    }
    else
    {
        Adress = new char[1];
        Adress[0] = '\0';
    }

}
void Person::SetNumber(int _Number)
{
    Number=_Number;
}

std::ostream& operator<<(std::ostream& os, const Person& rhs)
{
    os << "Name: "<< rhs.Name <<std::endl<<"Adress: "<<rhs.Adress<<std::endl<<"Number: "<<rhs.Number;
    return os;
}
