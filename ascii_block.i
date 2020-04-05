 /* ascii_block.i */
 
 %include <std_string.i>
 %include <typemaps.i>
 
 %module ascii_block 
 %{
 /* Put header files here or function declarations like below */
 #include "ConvString.h"
 extern string to_ascii(string word);
 %}

 #include "ConvString.h"
 extern std::string to_ascii(std::string word);