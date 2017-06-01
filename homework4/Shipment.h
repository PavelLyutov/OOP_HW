#ifndef SHIPMENT_H
#define SHIPMENT_H
using namespace std;
#include<iostream>

#include"Person.h"

enum class Type {None,Normal,Fast,Express};
class Shipment
{
    public:
        Shipment(Person _Sender,Person _Receiver,Type _eType,int _ID);
        ~Shipment();
        Shipment(const Shipment& other);
        Shipment& operator=(const Shipment& other);



        void SetSender(Person val) ;
        void SetReciever(Person val) ;
        void SeteType(Type val) ;
        void SetID(int val) ;

        Person GetSender() const;
        Person GetReciever() const;
        Type GeteType() const;
        int GetID() const;

        char* PrintType(Type eType);



        virtual void Print()
        {
        cout<<"Sender :"<<Sender;
        cout<<"Receiver :"<<Receiver;
        cout<<"Type of shipmet: "<<PrintType(eType);
        cout<<"ID:"<<GetID();
        };
        virtual void getPrize()
        {

        };

    protected:
    private:
        Person Sender;
        Person Reciever;
        Type eType;
        int ID;
};

#endif // SHIPMENT_H
