#include "Shipment.h"


Shipment::Shipment(Person _Sender,Person _Receiver,Type _eType,int _ID)
{
    SetSender(_Sender);
    SetReciever(_Receiver);
    SeteType(_eType);
    SetID(_ID);
}

Shipment::~Shipment()
{

}

Shipment::Shipment(const Shipment& other)
{
    SetSender(other.Sender);
    SetReciever(other.Receiver);
    SeteType(other.eType);
    SetID(other.ID);

}

Shipment& Shipment::operator=(const Shipment& rhs)
{
    if (this == &rhs) return *this; // handle self assignment

    SetSender(rhs.Sender);
    SetReciever(rhs.Receiver);
    SeteType(rhs.eType);
    SetID(rhs.ID);

    return *this;
}


void Shipment::SetSender(Person _Sender)
{
    Sender = _Sender;
}
void Shipment::SetReciever(Person _Receiver)
{
    Receiver = _Receiver;
}
void Shipment::SeteType(Type _eType)
{
    eType=_eType;
}
void Shipment::SetID(int _ID)
{
    ID=_ID;
}

Person Shipment::GetSender() const
{
    return Sender;
}
Person Shipment::GetReciever() const
{
    return Receiver;
}
Type Shipment::GeteType() const
{
    return eType;
}
int Shipment::GetID() const
{
    return ID;
}

 char* PrintType(Type eType)
 {
     switch(eType)
     {
         case Type::None : return "None"; break;
         case Type::Normal : return "Normal"; break;
         case Type::Fast : return "Fast"; break;
         case Type::Express : return "Express"; break;
     }
 }


