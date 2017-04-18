#include <string>

using namespace std;

class BigInt
{
private:
	string number;
	bool sign;
public:
	BigInt();
	BigInt(string s);
	BigInt(string s, bool sin);
	BigInt(int n);

	void setNumber(string s);
	const string& getNumber();
	void setSign(bool s);
	const bool& getSign();
	BigInt absolute();

	void operator = (BigInt b);
	bool operator == (BigInt b);
	bool operator != (BigInt b);
	bool operator > (BigInt b);
	bool operator < (BigInt b);
	bool operator >= (BigInt b);
	bool operator <= (BigInt b);
	BigInt& operator ++(); // prefix
	BigInt  operator ++(int); // postfix
	BigInt& operator --(); // prefix
	BigInt  operator --(int); // postfix
	BigInt operator + (BigInt b);
	BigInt operator - (BigInt b);
	BigInt operator * (BigInt b);
	BigInt operator / (BigInt b);
	BigInt operator % (BigInt b);
	BigInt& operator += (BigInt b);
	BigInt& operator -= (BigInt b);
	BigInt& operator *= (BigInt b);
	BigInt& operator /= (BigInt b);
	BigInt& operator %= (BigInt b);
	BigInt& operator [] (int n);
	BigInt operator -();
	operator string();

private:
	bool equals(BigInt n1, BigInt n2);
	bool less(BigInt n1, BigInt n2);
	bool greater(BigInt n1, BigInt n2);
	string add(string number1, string number2);
	string subtract(string number1, string number2);
	string multiply(string n1, string n2);
	pair<string, long long> divide(string n, long long den);
	string toString(long long n);
	long long toInt(string s);
};
