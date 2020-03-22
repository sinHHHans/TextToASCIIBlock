#include "globals.h"
#include "String.h"

int main ()
{
	ConvString CString;
	cout <<"Geben Sie ein Wort ein"<<endl;
	cin >>CString;
	
		

	ofstream output("Output.txt");
	output<<CString;

	getchar();
	getchar();

}//end of main

