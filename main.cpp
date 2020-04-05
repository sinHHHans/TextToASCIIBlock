#include "ConvString.h"
#include <iostream>

int main ()
{
	
	string input_string;
	cout <<"Enter text to convert"<<endl;
	getline(cin, input_string);
	
	ConvString CString(input_string);
	
	cout << "As output stream" << endl;
	cout<<CString;//.to_ascii_block();

	cout << "By function call" << endl;
	cout<<CString.to_ascii_block();
	getchar();
	getchar();

}//end of main

