#pragma once
#include<iostream>

#include"Soldiar.h"

    class Army{
public:
        Army(char* _Name,Soldiar* Soldiars,size_t _NumberOfSoldiars);
        ~Army();

        char* getArmyName() const;

        void setArmyName(char* _Name);
        void setSoldiars(Soldiar* Soldiars,size_t NumberOfSoldiars);
        void setCapacity(size_t _Capacity);

        void FightOtherArmy();  // ne sum go dovurshil

protected:
    char* Name;
    Soldiar* Soldiars;
    size_t NumberOfSoldiars;
    size_t Capacity;


    };
