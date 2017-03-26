#include "ServiceJob.h"

ServiceJob::ServiceJob()
{
    this->Time =0;
    this->RepairType = None;
}

ServiceJob::ServiceJob(double newTime, Repair newRepairType)
{
    Time = newTime;
    RepairType = newRepairType;
}




double ServiceJob:: getTime()
{
    return Time;
}

void ServiceJob::setTime(double newTime)
{
    Time=newTime;
}

void ServiceJob::operator=(const ServiceJob & other)
{
	this->RepairType = other.RepairType;
	this->Time = other.Time;
}
char* returnRepairType(Repair RepairT)
{
	switch (RepairT)
	{
	case Engine:
	    return "Engine";
	    break;
	case Maintenance:
	     return "Maintance";
	     break;
	case Suspension:
	     return "Suspension";
	     break;
	default: return "Not assigned";
	     break;
	}
}

Repair ServiceJob::getRepairType()
{
    return RepairType;
}

void ServiceJob::setRepairType(Repair newRepairType)
{
    RepairType=newRepairType;
}
