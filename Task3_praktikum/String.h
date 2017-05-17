#ifndef STRING_H
#define STRING_H

class String
{
public:
    String(const char*);
    String();
    String(const String& owner);
    ~String();
    String& operator=(const String&);

    // Getters
    const char* GetData() const;
    unsigned int GetLength() const;

    // Setters
    void SetData(const char*);
private:
    char* data;
    unsigned int  length;
};
#endif
