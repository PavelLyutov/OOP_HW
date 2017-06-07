#pragma once

#include<iostream>
#include<cstring>

#include"Soldiar.h"

using namespace std;

enum class ArcherType{Elf , Hobbit , Gnome};
class Archer : public Soldiar{



    public:


        Archer(char* _Name, int _AtackPoints , int _DefensePoints,ArcherType eArcherType)
        :Soldiar( _Name, _AtackPoints ,  _DefensePoints)
        {


                SetAtackPoints(_AtackPoints,eArcherType);
                SetDefensePoints(_DefensePoints,eArcherType);


        };

      //  int GetAtackPoints() const;

       //  int GetDefensePoints() const;

        void SetAtackPoints(int _AtackPoints,ArcherType eArcherType)
        {
         switch(eArcherType)
         {
            case ArcherType::Elf :  AtackPoints = _AtackPoints * 3 ; break;
            case ArcherType::Hobbit :  AtackPoints = _AtackPoints /3 ; break;
            case ArcherType::Gnome  : AtackPoints = 10 ; break;

         }
        }
        void SetDefensePoints(int _DefensePoints,ArcherType eArcherType)
        {
            switch(eArcherType)
            {
                    case ArcherType::Elf :  DefensePoints = _DefensePoints / 3 ; break;
                    case ArcherType::Hobbit :  DefensePoints = _DefensePoints * 3 ; break;
                    case ArcherType::Gnome :  DefensePoints = 10 ; break;

            }
        }






    private:
        ArcherType eArcherType;



};


enum class MarineType{Human , Mage};
class Marine : public Soldiar{
public:

        Marine(char* _Name, int _AtackPoints , int _DefensePoints,MarineType eMarineType)
        :Soldiar( _Name, _AtackPoints ,  _DefensePoints)
        {
                SetAtackPoints(_AtackPoints,eMarineType);
                SetDefensePoints(_DefensePoints,eMarineType);

        }


        void SetAtackPoints(int _AtackPoints,MarineType eMarineType)
        {
         switch(eMarineType)
         {
            case MarineType::Human : AtackPoints = 11 ; break;
            case MarineType::Mage :  AtackPoints = _AtackPoints *4 ; break;


         }
        }
        void SetDefensePoints(int _DefensePoints,MarineType eMarineType)
        {
            switch(eMarineType)
            {
                    case MarineType::Human :  DefensePoints = _DefensePoints = 11 ; break;
                    case MarineType::Mage :  DefensePoints = _DefensePoints / 4  ; break;


            }
        }
private:
    MarineType eMarineType;




};

enum class GoblinType{Captain, Colonel , General};
class Goblin : public Soldiar{
public:

        Goblin(char* _Name, int _AtackPoints , int _DefensePoints,GoblinType eGoblinType)
        :Soldiar( _Name, _AtackPoints ,  _DefensePoints)
        {
                SetAtackPoints(_AtackPoints, eGoblinType);
                SetDefensePoints(_DefensePoints,eGoblinType);


        }


            void SetAtackPoints(int _AtackPoints,GoblinType eGoblinType)
        {
         switch(eGoblinType)
         {
            case GoblinType::Captain :  AtackPoints = _AtackPoints  ; break;
            case GoblinType::Colonel :  AtackPoints = _AtackPoints *2 ; break;
            case GoblinType::General  :  AtackPoints = _AtackPoints *2; break;

         }
        }
        void SetDefensePoints(int _DefensePoints,GoblinType eGoblinType)
        {
            switch(eGoblinType)
            {
                    case GoblinType::Captain : DefensePoints = _DefensePoints *2 ; break;
                    case GoblinType::Colonel : DefensePoints = _DefensePoints  ; break;
                    case GoblinType::General : DefensePoints = DefensePoints *2; break;

            }
        }



private:
    GoblinType eGoblinType;

};

enum class MorgulType{Atacker , Defender};
class Morgul : public Soldiar{

public:

            Morgul(char* _Name, int _AtackPoints , int _DefensePoints,    MorgulType eMorgulType)
            :Soldiar( _Name, _AtackPoints ,  _DefensePoints)
        {


                SetAtackPoints(_AtackPoints,eMorgulType);
                SetDefensePoints(_DefensePoints,eMorgulType);


        };


            void SetAtackPoints(int _AtackPoints,MorgulType eMorgulType)
        {
         switch(eMorgulType)
         {
            case MorgulType::Atacker : AtackPoints = _AtackPoints * 3 ; break;
            case MorgulType::Defender :  AtackPoints = _AtackPoints  ; break;


         }
        }
        void SetDefensePoints(int _DefensePoints,MorgulType eMorgulType)
        {
            switch(eMorgulType)
            {
                    case MorgulType::Atacker :  DefensePoints = _DefensePoints   ; break;
                    case MorgulType::Defender :  DefensePoints = _DefensePoints * 3 ; break;


            }
        }



private:
    MorgulType eMorgulType;

};
