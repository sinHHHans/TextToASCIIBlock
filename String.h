#ifndef STRING_INC
#include "globals.h"
#define STRING_INC

class ConvString
{
private:
	char* str;
	unsigned size;
public:
	ConvString();
	friend istream& operator>>(istream& s,ConvString& cs);
	friend ostream& operator<<(ostream& s, ConvString& cs);
};

#endif
