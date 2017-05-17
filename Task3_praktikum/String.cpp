#include "String.h"
#include<iostream>
#include <cstring>


String::String(const char* newData)
: data(nullptr)
{
    SetData(newData);
}

String::String()
: data(nullptr)
{
    SetData("");
}

String::String(const String& other)
: data(nullptr)
{
    SetData(other.data);
}

String::~String()
{
    delete[] data;
}

String& String::operator = (const String& rhs)
{
    if (this != &rhs)
    {
        SetData(rhs.data);
    }
    return *this;
}

const char* String::GetData() const
{
    return data;
}
size_t String::GetLength() const
{
    return length;
}

void String::SetData(const char* newData)
{
    delete[] data;

    if (newData != nullptr)
    {
        size_t len = strlen(newData);
        if (len > 0)
        {
            length = len;
            data = new char[length + 1];
            strcpy(data, newData);
            return;
        }
    }

    data = new char[1];
    data[0] = '\0';
    length = 0;
}
