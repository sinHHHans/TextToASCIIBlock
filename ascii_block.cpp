 /* File : example.c */
 
 #include <string>
 #include "ConvString.h"
 #include <iostream>
 
 using namespace std;
 
 string to_ascii(string word){
	ConvString conv_string(word);
	string ret_str = conv_string.to_ascii_block();

	 return ret_str;
 }