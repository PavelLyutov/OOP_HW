#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<cstring>

class Person
{
    public:
        Person(char* _Name,char* _Adress,int _Number);
        ~Person();
        Person(const Person& other);
        Person& operator=(const Person& other);


        char* GetName() const;
        char* GetAdress()   const;
        int GetNumber()  const;


        void SetName(char* val) ;
        void SetAdress(char* val) ;
        void SetNumber(int val) ;

         friend std::ostream& operator<<(std::ostream& os, const Person& rhs);

    protected:
    private:
        char* Name;
        char* Adress;
        int Number;
};

#endif // PERSON_H
