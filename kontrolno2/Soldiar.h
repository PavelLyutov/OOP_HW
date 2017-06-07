#ifndef SOLDIAR_H
#define SOLDIAR_H

#include<iostream>
#include<cstring>

using namespace std;

class Soldiar
{
    public:
        Soldiar(char* _Name, int _AtackPoints , int _DefensePoints);
        Soldiar();
        ~Soldiar();
       // Soldiar(const Soldiar& other);
       // Soldiar& operator=(const Soldiar& other);


        char* GetName() const;
        int GetAtackPoints() const;
        int GetDefensePoints() const;


        void SetName(char* val) ;
        void SetAtackPoints(int val) ;
        void SetDefensePoints(int val) ;

         void PrintInfo()
        {
            cout<<"Name : "<<GetName()<<endl;
            cout<< "AtackPoints : "<<GetAtackPoints()<<endl;
            cout<<"DefensePoints : "<<GetDefensePoints()<<endl;



        };



    protected:

        char* Name;
        int AtackPoints;
        int DefensePoints;
};

#endif // SOLDIAR_H
