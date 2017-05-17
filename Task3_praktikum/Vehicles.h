#pragma once
#include "String.h"

class VehicleInfo
{   public:
        VehicleInfo();
        VehicleInfo(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color);
        VehicleInfo(const VehicleInfo& other);
        VehicleInfo& operator=(const VehicleInfo& other);
        ~VehicleInfo();

        String getName() const;
         int*   getEGN();
        String getNomer() const ;
        String getRegDate() const;
        String getColor() const ;



        void setName(String _Name);
        void setEGN(const int* _EGN,int Size);
        void setNomer(String _Nomer);
        void setRegDate(String _RegDate);
        void setColor(String _Color);

        double CalculateGO(double coefByRegion);




    private:
        String Name;
        int EGN[10]; // int[10]
        String Nomer;
        String RegDate;
        String Color;
        int Age;


};



enum class Engine{None,Diesel,Benzin,Hybrid,Gas};
enum class Euro{None,Euro1,Euro2,Euro3,Euro4,Euro5,Euro6};



class Vehicle : public VehicleInfo
{
    public:
        Vehicle();
        Vehicle(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro _EuroStandart);
        ~Vehicle();
        Vehicle(const Vehicle& other);
        Vehicle& operator=(const Vehicle& other);

        const Engine GetTypeEngine() ;
        const int GetHorsePower() ;
        const double GetVolume() ;
        const int GetCylinders() ;
        const Euro GetEuroStandart() ;



        void SetTypeEngine(Engine val);
        void SetHorsePower(int val);
        void SetVolume(double val);
        void SetCylinders(int val);
        void SetEuroStandart(Euro val);


        double CalculateTaxRegion(double coefByRegion);


    protected:

    private:
        Engine TypeEngine;
        int HorsePower;
        double Volume;
        int Cylinders;
        Euro EuroStandart;

};

enum class CarType{None,Hatchback,Sedan,Combi,Cabriolet,LiftBack};

class Car:public Vehicle{
public:
    Car();
    Car(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color/*,
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro EuroStandart*/,
                Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _newEuroStandart,CarType _eCarType);
    Car(const Car& other);
    Car& operator=(const Car& rhs);
    ~Car();

    void setCarType(CarType _eCarType);

private:
      CarType eCarType;

};

enum class MotorcycleType{None,Sport,Tourist,Cruiser,Chopper,Cross};

class Motorcycle : public Vehicle{
public:
    Motorcycle();
    Motorcycle(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,/*
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro EuroStandart,*/
                Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _newEuroStandart,MotorcycleType _eMotorcycleType);
    Motorcycle(const Motorcycle& other);
    Motorcycle& operator=(const Motorcycle& rhs);
    ~Motorcycle();

    void setMotorcycleType(MotorcycleType _eMotorcycleType);

private:
    MotorcycleType eMotorcycleType;

};

enum class TruckType{None,Trailer,Normal,Specia};
class Truck : public Vehicle{
    public:
    Truck();
    Truck(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,/*
                Engine TypeEngine,int HorsePower,double Volume,int Cylinders,Euro EuroStandart,*/
                Engine _TypeEngine , int _HorsePower , double _Volume ,int _Cylinders ,Euro _newEuroStandart,TruckType _eTruckType);
    Truck(const Truck& other);
    Truck& operator=(const Truck& rhs);
    ~Truck();

    void setTruckType(TruckType _eTruckType);

private:
    TruckType eTruckType;

};

class Treiler : public VehicleInfo{
public:
    Treiler();
    Treiler(String _Name,int* EGN,String _Nomer,String _RegDate,String _Color,
            int _Axles , int _Mass);
    Treiler(const Treiler& other);
    Treiler& operator=(const Treiler& rhs);
    ~Treiler();

    const int getAxles();
    const int getMass();


    void setAxles(int _Axles);
    void setMass(int _Mass);


private:
    int Axles ; //
    int Mass;


};





