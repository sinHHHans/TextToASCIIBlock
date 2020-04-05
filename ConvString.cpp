#include "ConvString.h"

istream& operator>>(istream& s, ConvString& cs)
{
	getline(s, cs.str);
	return s;
}

ostream& operator<<(ostream& s, ConvString& cs)
{
	unsigned string_size = cs.str.length();
	
	for (unsigned z=1;z<=8;z++)//Zeile(es gibt 8)
	{
		for (unsigned b=0;b<=string_size;b++) // Buchstabe
		{
			if (cs.str[b] == 'A' || cs.str[b] == 'a' ) //AAAAAAAAAAAAAAAAA
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ___  )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (   ) |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (___) |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|  ___  |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (   ) |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (   ) |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/     \\|"<<"   ";
			}
			else if (cs.str[b] == 'B' || cs.str[b] == 'b' ) // BBBBBBBBBBBBBBBBBBBBB
			{
				if(z==1)		//Zeile 1
					s<<" ______  "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ___ \\ "<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (   ) )"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (__/ / "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|  __ (  "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (  \\ \\ "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| )___) )"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/ \\___/ "<<"   ";
			}
			else if (cs.str[b] == 'C' || cs.str[b] == 'c' ) // CCCCCCCCCCCCCCCCCCCCC
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ \\"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    \\/"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |      "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |      "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| |      "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (____/\\"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______/"<<"   ";
			}
			else if (cs.str[b] == 'D' || cs.str[b] == 'd' ) // DDDDDDDDDDDDDDDDDDDDDDDD
			{
				if(z==1)		//Zeile 1
					s<<" ______  "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  __  \\ "<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (  \\  )"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |   ) |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |   | |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| |   ) |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (__/  )"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(______/ "<<"   ";
			}
			else if (cs.str[b] == 'E' || cs.str[b] == 'e' ) // EEEEEEEEEEEEEEEEEEEEEEEE
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ \\"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    \\/"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (__    "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|  __)   "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (      "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (____/\\"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______/"<<"   ";
			}
			else if (cs.str[b] == 'F' || cs.str[b] == 'f' ) // FFFFFFFFFFFFFFFFFFFFFFF
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ \\"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    \\/"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (__    "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|  __)   "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (      "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| )      "<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/       "<<"   ";
			}
			else if (cs.str[b] == 'G' || cs.str[b] == 'g' ) // GGGGGGGGGGGGGGGGGGGGGGGGGGGG
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ \\"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    \\/"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |      "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| | ____ "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| | \\_  )"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (___) |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______)"<<"   ";
			}
			else if (cs.str[b] == 'H' || cs.str[b] == 'h' ) // HHHHHHHHHHHHHHHHHHHHHHHHH
			{
				if(z==1)		//Zeile 1
					s<<"         "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"|\\     /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| )   ( |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (___) |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|  ___  |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (   ) |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| )   ( |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/     \\|"<<"   ";
			}
			else if (cs.str[b] == 'I' || cs.str[b] == 'i' ) // IIIIIIIIIIIIIIIIIIIIIIIIII
			{
				if(z==1)		//Zeile 1
					s<<"_________"<<"   ";
				else if(z==2)	//Zeile 2
					s<<"\\__   __/"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"   ) (   "<<"   ";
				else if(z==4)	//Zeile 4
					s<<"   | |   "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"   | |   "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"   | |   "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"___) (___"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"\\_______/"<<"   ";
			}
			else if (cs.str[b] == 'J' || cs.str[b] == 'j' ) // JJJJJJJJJJJJJJJJJJJJJJJJ
			{
				if(z==1)		//Zeile 1
					s<<"_________"<<"   ";
				else if(z==2)	//Zeile 2
					s<<"\\__    _/"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"   )  (  "<<"   ";
				else if(z==4)	//Zeile 4
					s<<"   |  |  "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"   |  |  "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"   |  |  "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"|\\_)  )  "<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(____/   "<<"   ";
			}
			else if (cs.str[b] == 'K' || cs.str[b] == 'k' ) // KKKKKKKKKKKKKKKKKKKKKKK
			{
				if(z==1)		//Zeile 1
					s<<" _       "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"| \\    /\\"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"|  \\  / /"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"|  (_/ / "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|   _ (  "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"|  ( \\ \\ "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"|  /  \\ \\"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|_/    \\/"<<"   ";
			}
			else if (cs.str[b] == 'L' || cs.str[b] == 'l' ) // LLLLLLLLLLLLLLLLLLLLLLLLL
			{
				if(z==1)		//Zeile 1
					s<<" _       "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"( \\      "<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (      "<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |      "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |      "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| |      "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (____/\\"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______/"<<"   ";
			}
			else if (cs.str[b] == 'M' || cs.str[b] == 'm' ) // MMMMMMMMMMMMMMMMMMMMMMMMMMM
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(       )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| () () |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| || || |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |(_)| |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| |   | |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| )   ( |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/     \\|"<<"   ";
			}
			else if (cs.str[b] == 'N' || cs.str[b] == 'n' ) // NNNNNNNNNNNNNNNNNNN
			{
				if(z==1)		//Zeile 1
					s<<" _       "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"( (    /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"|  \\  ( |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"|   \\ | |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| (\\ \\) |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| | \\   |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| )  \\  |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/    )_)"<<"   ";
			}
			else if (cs.str[b] == 'O' || cs.str[b] == 'o' ) // OOOOOOOOOOOOOOOO
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ___  )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (   ) |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |   | |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |   | |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| |   | |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (___) |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______)"<<"   ";
			}
			else if (cs.str[b] == 'P' || cs.str[b] == 'p' ) // PPPPPPPPPPPPPPPPPPP
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    )|"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (____)|"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|  _____)"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (      "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| )      "<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/       "<<"   ";
			}
			else if (cs.str[b] == 'Q' || cs.str[b] == 'q' ) // QQQQQQQQQQQQQQQ
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ___  )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (   ) |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |   | |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |   | |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| | /\\| |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (_\\ \\ |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(____\\/_)"<<"   ";
			}
			else if (cs.str[b] == 'R' || cs.str[b] == 'r' ) // RRRRRRRRRRRRR
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    )|"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (____)|"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"|     __)"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| (\\ (   "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| ) \\ \\__"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/   \\__/"<<"   ";
			}
			else if (cs.str[b] == 'S' || cs.str[b] == 's' ) // SSSSSSSSSSSSSSSSSSS
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"(  ____ \\"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| (    \\/"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| (_____ "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"(_____  )"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"      ) |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"/\\____) |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"\\_______)"<<"   ";
			}
			else if (cs.str[b] == 'T' || cs.str[b] == 't' ) // TTTTTTTTTTTTTTTTTT
			{
				if(z==1)		//Zeile 1
					s<<"_________"<<"   ";
				else if(z==2)	//Zeile 2
					s<<"\\__   __/"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"   ) (   "<<"   ";
				else if(z==4)	//Zeile 4
					s<<"   | |   "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"   | |   "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"   | |   "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"   | |   "<<"   ";
				else if(z==8)	//Zeile 8
					s<<"   )_(   "<<"   ";
			}
			else if (cs.str[b] == 'U' || cs.str[b] == 'u' ) // UUUUUUUUUUUUUUUUUUUUUUU
			{
				if(z==1)		//Zeile 1
					s<<"         "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"|\\     /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| )   ( |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |   | |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |   | |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| |   | |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| (___) |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______)"<<"   ";
			}
			else if (cs.str[b] == 'V' || cs.str[b] == 'v' ) // VVVVVVVVVVVVVVVVVVVVV
			{
				if(z==1)		//Zeile 1
					s<<"         "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"|\\     /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| )   ( |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| |   | |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"( (   ) )"<<"   ";
				else if(z==6)	//Zeile 6
					s<<" \\ \\_/ / "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"  \\   /  "<<"   ";
				else if(z==8)	//Zeile 8
					s<<"   \\_/   "<<"   ";
			}
			else if (cs.str[b] == 'W' || cs.str[b] == 'w' ) // WWWWWWWWWWWWWWWWWWWWWWWWWW
			{
				if(z==1)		//Zeile 1
					s<<"         "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"|\\     /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"| )   ( |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"| | _ | |"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"| |( )| |"<<"   ";
				else if(z==6)	//Zeile 6
					s<<"| || || |"<<"   ";
				else if(z==7)	//Zeile 7
					s<<"| () () |"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______)"<<"   ";
			}
			else if (cs.str[b] == 'X' || cs.str[b] == 'x' ) // XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
			{
				if(z==1)		//Zeile 1
					s<<"         "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"|\\     /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"( \\   / )"<<"   ";
				else if(z==4)	//Zeile 4
					s<<" \\ (_) / "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"  ) _ (  "<<"   ";
				else if(z==6)	//Zeile 6
					s<<" / ( ) \\ "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"( /   \\ )"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"|/     \\|"<<"   ";
			}
			else if (cs.str[b] == 'Y' || cs.str[b] == 'y' ) // YYYYYYYYYYYYYYYYYYYYYYYYY
			{
				if(z==1)		//Zeile 1
					s<<"         "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"|\\     /|"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"( \\   / )"<<"   ";
				else if(z==4)	//Zeile 4
					s<<" \\ (_) / "<<"   ";
				else if(z==5)	//Zeile 5
					s<<"  \\   /  "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"   ) (   "<<"   ";
				else if(z==7)	//Zeile 7
					s<<"   | |   "<<"   ";
				else if(z==8)	//Zeile 8
					s<<"   \\_/   "<<"   ";
			}
			else if (cs.str[b] == 'Z' || cs.str[b] == 'z' ) // ZZZZZZZZZZZZZZZZZZZ
			{
				if(z==1)		//Zeile 1
					s<<" _______ "<<"   ";
				else if(z==2)	//Zeile 2
					s<<"/ ___   )"<<"   ";
				else if(z==3)	//Zeile 3
					s<<"\\/   )  |"<<"   ";
				else if(z==4)	//Zeile 4
					s<<"    /   )"<<"   ";
				else if(z==5)	//Zeile 5
					s<<"   /   / "<<"   ";
				else if(z==6)	//Zeile 6
					s<<"  /   /  "<<"   ";
				else if(z==7)	//Zeile 7
					s<<" /   (_/\\"<<"   ";
				else if(z==8)	//Zeile 8
					s<<"(_______/"<<"   ";
			}
		
			else if (cs.str[b] == ' ')
			{
					s<<"         ";
			}
		}
		//Zeilenumbruch am Ende der Zeile
		s<<endl;
	}	
	return s;
}

ConvString::ConvString(string& input_string)
{
	this->str=input_string;
}

string ConvString::to_ascii_block()
{

	ostringstream o;
	o<<*this;
	return o.str();	
}

//string ConvString::getString(){
//	return this->str;
//}