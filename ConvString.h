#ifndef STRING_INC
#define STRING_INC

//#include <fstream>
//#include <math.h>
//#include <cstring>
#include <string>
#include <sstream> 

using namespace std;

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
