#pragma once
#include <cstring>
using namespace std;
class String
{
public:
    String();
    String(const char* Data);
    ~String(); // v USLOVIETO NE SE ISKA DESTRUKTOR

    char* getData();
    int getSize();

    void setData(const char* Data);
    void setSize(int Size);
    void destroy();

 private:
     char* Data;
     int  Size;
};
