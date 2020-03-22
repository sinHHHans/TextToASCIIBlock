#include "globals.h"
#include "ConvString.h"

int main ()
{
	ConvString CString;
	cout <<"Geben Sie ein Wort ein"<<endl;
	cin >>CString;

	//ofstream output("Output.txt");
	//cout<<CString;
	
	
	cout<<CString;//.to_ascii_block();
	//cout<<"String: "<<CString.getString();
	cout<<CString.to_ascii_block();
	getchar();
	getchar();

}//end of main

