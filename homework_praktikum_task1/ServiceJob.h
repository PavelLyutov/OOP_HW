#pragma once
#include <iostream>
#include <cstring>


enum Repair{None=0, Maintenance=10,Engine=50,Suspension=30};
struct ServiceJob
{
    double Time;
    Repair RepairType;

ServiceJob();
ServiceJob(double Time,Repair RepairType);

double GetServiceJobPrice(const ServiceJob& );

void operator=(const ServiceJob&);

double getTime();
Repair getRepairType();



void setTime(double Time);
void setRepairType(Repair RepairType);

};

