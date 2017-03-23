#include "String.h"
void String::destroy()
{
    delete[] this-> Data;
    this->Size = 0;
}

String::String()
{
    this -> Data = NULL;
    this -> Size = 0;
}

String::String(const char* Data)
{
    this->Data = new char[strlen(Data)+1];
    strcpy(this->Data,Data);
}
String::~String()
{
    destroy();
}

void String ::setData(const char* newData)
{
    delete[]Data;
    if(newData)
    {
        size_t len = strlen(newData);
        if(len!=0)
        {
            Data = new char[len+1];
            strcpy(Data,newData);
        }
        else{
            Data= new char[1];
            Data[0]='\0';

        }
    }
    else{
        Data= new char[1];
            Data[0]='\0';
    }
}
void String::setSize(int newSize)
{
    Size=newSize;
}
int String::getSize()
{
    return Size;
}
char* String::getData()
{
    return this->Data;
}


