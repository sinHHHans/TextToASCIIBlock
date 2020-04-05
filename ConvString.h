#ifndef STRING_INC
#include "globals.h"
#define STRING_INC

class ConvString
{

public:	
	ConvString(string& input_stream);
	string str;
	string to_ascii_block();
};

istream& operator>>(istream& s,ConvString& cs);
ostream& operator<<(ostream& s, ConvString& cs);

#endif
