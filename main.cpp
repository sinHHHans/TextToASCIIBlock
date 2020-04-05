#include "globals.h"
#include "ConvString.h"

int main ()
{
	
	string input_string;
	cout <<"Geben Sie ein Wort ein"<<endl;
	getline(cin, input_string);
	
	ConvString CString(input_string);
	
	cout << "As output stream" << endl;
	cout<<CString;//.to_ascii_block();

	cout << "By function call" << endl;
	cout<<CString.to_ascii_block();
	getchar();
	getchar();

}//end of main

