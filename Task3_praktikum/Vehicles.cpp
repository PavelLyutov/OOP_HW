#include "Vehicles.h"
// FIRST CLASS

VehicleInfo::VehicleInfo()
{
    setName('\0');
    setEGN(nullptr,0);
    setNomer('\0');
    setRegDate('\0');
    setColor('\0');

}
VehicleInfo::VehicleInfo(String _Name,int* _EGN,String _Nomer,String _RegDate,String _Color)
{
    setName(_Name);
    setEGN(_EGN,10);
    setNomer(_Nomer);
    setRegDate(_RegDate);
    setColor(_Color);

}
VehicleInfo::VehicleInfo(const VehicleInfo& other)
{
    setName(other.Name);
    setEGN(other.EGN,10);
    setNomer(other.Nomer);
    setRegDate(other.RegDate);
    setColor(other.Color);
}

VehicleInfo& VehicleInfo::operator=(const VehicleInfo& rhs)
{
    if (this == &rhs) return *this;
    setName(rhs.Name);
    setEGN(rhs.EGN,10);
    setNomer(rhs.Nomer);
    setRegDate(rhs.RegDate);
    setColor(rhs.Color);
    return *this;


}

VehicleInfo::~VehicleInfo()
{

}

String VehicleInfo::getName() const
{
    return Name;
}
int*   VehicleInfo::getEGN()
{
    return EGN;
}
String VehicleInfo::getNomer() const
{
    return Nomer;
}
String VehicleInfo::getRegDate() const
{
    return RegDate;
}
String VehicleInfo::getColor() const
{
    return Color;
}



void VehicleInfo::setName(String _Name)
{
    Name = _Name;
}
void VehicleInfo::setEGN(const int* _EGN,int Size)
{
        for(int i = 0 ;i<Size;i++)
        {
            EGN[i] = _EGN[i];
        }



}
void VehicleInfo::setNomer(String _Nomer)
{
    Nomer = _Nomer;
}
void VehicleInfo::setRegDate(String _RegDate)
{
    RegDate = _RegDate;
}
void VehicleInfo::setColor(String _Color)
{
    Color = _Color;
}


double VehicleInfo::CalculateGO( double coefByRegion)
{
    int age = 117 - (EGN[0]*10 + EGN[1]);
	int taxByAge;
	if (age < 30)
	{
		taxByAge = 40;
	}
	else if (age < 40)
	{
		taxByAge = 30;
	}
	else
	{
		taxByAge = 20;
	}

	return (50 + taxByAge) * coefByRegion;
}



// ENDS FIRST CLASS






Vehicle::Vehicle()
:VehicleInfo()
{
    SetTypeEngine(Engine::None);
    SetHorsePower(0);
    SetVolume(0);
    SetCylinders(0);
    SetEuroStandart(Euro::None);
}

//-------------------------------------------------------------------------------------------------------------------------

Vehicle::Vehicle(String _Name,int* _EGN,String _Nomer,String _RegDate,String _Color,Engine _TypeEngine,int _HorsePower,double _Volume,int _Cylinders,Euro _EuroStandart)
:VehicleInfo( _Name, _EGN, _Nomer, _RegDate, _Color)
{

    SetTypeEngine(TypeEngine);
    SetHorsePower(HorsePower);
    SetVolume(Volume);
    SetCylinders(Cylinders);
    SetEuroStandart(_EuroStandart);

}

Vehicle::~Vehicle()
{

}

Vehicle::Vehicle(const Vehicle& other)
:VehicleInfo(other)
{

    SetTypeEngine(other.TypeEngine);
    SetHorsePower(other.HorsePower);
    SetVolume(other.Volume);
    SetCylinders(other.Cylinders);
    SetEuroStandart(other.EuroStandart);

}

Vehicle& Vehicle::operator=(const Vehicle& rhs)
{
    if (this == &rhs) return *this;
        VehicleInfo::operator=(rhs);

    SetTypeEngine(rhs.TypeEngine);
    SetHorsePower(rhs.HorsePower);
    SetVolume(rhs.Volume);
    SetCylinders(rhs.Cylinders);
    SetEuroStandart(rhs.EuroStandart);


    return *this;
}

const Engine Vehicle::GetTypeEngine()
{
    return TypeEngine;
}
const int Vehicle::GetHorsePower()
{
    return HorsePower;
}
const double Vehicle::GetVolume()
{
    return Volume;
}
const int Vehicle::GetCylinders()
{
    return Cylinders;
}
const Euro Vehicle::GetEuroStandart()
{
   return EuroStandart;
}



void Vehicle::SetTypeEngine(Engine newTypeEngine)
{
    TypeEngine = newTypeEngine;
}
void Vehicle::SetHorsePower(int newHorsePower)
{
    HorsePower = newHorsePower;
}
void Vehicle::SetVolume(double newVolume)
{
    Volume = newVolume;
}
void Vehicle::SetCylinders(int newCylinders)
{
    Cylinders = newCylinders;
}
void Vehicle::SetEuroStandart(Euro newEuroStandart)
{
    EuroStandart = newEuroStandart;
}

double Vehicle::CalculateTaxRegion(double coefByRegion)
{
	int tax = 10;
	if (HorsePower > 100)
	{
		tax = 100;
	}

	return (tax + HorsePower) * coefByRegion;
}
//------------------------------------------------------------------------------------------------------

Car::Car()
:Vehicle()
{
    setCarType(CarType::None);
}


Car::Car(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color/*,
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro EuroStandart*/,
                Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _EuroStandart,CarType _eCarType)

{
    setCarType(_eCarType);
}

Car::Car(const Car& other)
:Vehicle(other)
{
    setCarType(other.eCarType);
}

Car& Car::operator=(const Car& rhs)
{
    if(this==&rhs)
        return *this;

    Vehicle::operator=(rhs);
    setCarType(rhs.eCarType);
    return *this;

}
Car::~Car()
{

}

void Car::setCarType(CarType _eCarType)
{
    eCarType = _eCarType;
}


//------------------------------------------------------------------------------

Motorcycle::Motorcycle()
:Vehicle()
{
    setMotorcycleType(MotorcycleType::None);
}

Motorcycle::Motorcycle(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,/*
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro EuroStandart,*/
                Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _EuroStandart,MotorcycleType _eMotorcycleType)

{
    setMotorcycleType(_eMotorcycleType);
}

Motorcycle::Motorcycle(const Motorcycle& other)
:Vehicle(other)
{
    setMotorcycleType(other.eMotorcycleType);
}

Motorcycle& Motorcycle::operator=(const Motorcycle& rhs)
{
    if(this==&rhs)
        return *this;

    Vehicle::operator=(rhs);
    setMotorcycleType(rhs.eMotorcycleType);
    return *this;

}
Motorcycle::~Motorcycle()
{

}

void Motorcycle::setMotorcycleType(MotorcycleType _eMotorcycleType)
{
    eMotorcycleType = _eMotorcycleType;
}
//-------------------------------------------------------------------------------------------------------------

Truck::Truck()
:Vehicle()
{
    setTruckType(TruckType::None);
}

Truck::Truck(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,/*
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro EuroStandart,*/
                Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _EuroStandart,TruckType _eTruckType)

{
    setTruckType(_eTruckType);
}

Truck::Truck(const Truck& other)
:Vehicle(other)
{
    setTruckType(other.eTruckType);
}

Truck& Truck::operator=(const Truck& rhs)
{
    if(this==&rhs)
        return *this;

    Vehicle::operator=(rhs);
    setTruckType(rhs.eTruckType);
    return *this;

}
Truck::~Truck()
{

}

void Truck::setTruckType(TruckType _eTruckType)
{
    eTruckType = _eTruckType;
}

//------------------------------------------------------------------------------------------
    Treiler::Treiler()
    :VehicleInfo()
    {
        setAxles(0);
        setMass(0);
    }
    Treiler::Treiler(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
            int _Axles , int _Mass)
            {
                setAxles(_Axles);
                setMass(_Mass);

            }
    Treiler::Treiler(const Treiler& other)
    :VehicleInfo(other)
    {
        setAxles(other.Axles);
        setMass(other.Mass);
    }
    Treiler& Treiler::operator=(const Treiler& rhs)
    {
        if(this==&rhs)
            return *this;

    VehicleInfo::operator=(rhs);
    setAxles(rhs.Axles);
    setMass(rhs.Mass);
    return *this;
    }

    Treiler::~Treiler()
    {

    }

    const int Treiler::getAxles()
    {
        return Axles;
    }
    const int Treiler::getMass()
    {
        return Mass;
    }


    void Treiler::setAxles(int _Axles)
    {
        Axles = _Axles;
    }
    void Treiler::setMass(int _Mass)
    {
        Mass = _Mass;
    }
