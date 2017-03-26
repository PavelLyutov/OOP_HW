#include "ServiceEntry.h"
#include<iostream>
using namespace std;

ServiceEntry::ServiceEntry()
{


	Name = String();
	CarPlates = String();
	ID = -1;
	CarMake = None_1;
	Client = None_2;
}

ServiceEntry::ServiceEntry(String newName, int newID, String newCarPlates, Make newCarMake, ClientType newClient, ServiceJob* serviceJob)
{
	Name = newName;
	ID = newID;
	CarPlates = newCarPlates;
	CarMake = newCarMake;
	Client = newClient;
}
char* PrintCarBrand(Make Brand)
{
	switch (Brand)
	{
    case BMW:
       return "BMW";
    break;
	case  Nissan:
	    return "Nissan";
	     break;
	case  Renault:
	    return "Renault";
	     break;
	case Subaru:
	    return "Subaru";
	    break;
	case Volkswagen:
	    return "Volkswagen";
	     break;
	default:
	    return "Not Assigned";
	     break;
	}
}
char* PrintClient(ClientType client)
{
	switch (client)
	{
	case Firm: return "Firms"; break;
	case Pref: return "Preferential"; break;
	case Private: return "Private"; break;
	default: return "Normal"; break;
	}
}

String ServiceEntry::getName()
{
	return Name;
}
void ServiceEntry::setName(String newName)
{
	Name = newName;
}
int ServiceEntry::getID()
{
	return ID;
}
void ServiceEntry::setID(int newID)
{
	ID = newID;
}
String ServiceEntry::getCarPlates()
{
	return CarPlates;
}
void ServiceEntry::setCarPlates(String newCarPlates)
{
	CarPlates = newCarPlates;
}
Make ServiceEntry::getCarMake()
{
	return CarMake;
}
void ServiceEntry::setCarMake(Make newCarMake)
{
	CarMake = newCarMake;
}
ClientType ServiceEntry::getClientType()
{
	return Client;
}
void ServiceEntry::setClientType(ClientType newClient)
{
	Client = newClient;
}

void ServiceEntry::Information()
{
    cout<<"Name: "<<Name.getStr()<<endl;
    cout << "Identificator: " << ID << endl;
	cout << "Plate number: " << CarPlates.getStr() << endl;
	cout << "Car Brand: " << this->getCarMake() << endl;
	cout << "Client Type: " << this->getClientType() << endl;
}

