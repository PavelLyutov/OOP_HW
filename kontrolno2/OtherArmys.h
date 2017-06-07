#pragma once
#include<iostream>
#include"Army.h"
#include"Soldiar.h"
#include"SoldiarsType.h"

// Legolas , gimli i tn
class GoodArmy:public Army{

public:

    void addArcher(const Archer&)
    {
        if((NumberOfSoldiars +1 )> Capacity)
        {
            setCapacity(NumberOfSoldiars*2);
        }
        Soldiars[NumberOfSoldiars] = _Archer;
        NumberOfSoldiars++;
    };
    void addMariner(const Marine&)
    {
            if((NumberOfSoldiars +1 )> Capacity)
        {
            setCapacity(NumberOfSoldiars*2);
        }
        Soldiars[NumberOfSoldiars] = _Marine;
        NumberOfSoldiars++;
    };




};

// orcs army
class BadArmy:public Army{

public:

    void addGoblin(const Goblin&)
        {
            if((NumberOfSoldiars +1 )> Capacity)
        {
            setCapacity(NumberOfSoldiars*2);
        }
        Soldiars[NumberOfSoldiars] = _Goblin;
        NumberOfSoldiars++;
    };


    void addMorgul(const Morgul&)
    {
            {
            if((NumberOfSoldiars +1 )> Capacity)
        {
            setCapacity(NumberOfSoldiars*2);
        }
        Soldiars[NumberOfSoldiars] = _Morgul;
        NumberOfSoldiars++;
    };






};

