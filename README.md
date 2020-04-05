```
           _______     _______     _______    _________   _________
          (  ___  )   (  ____ \   (  ____ \   \__   __/   \__   __/
          | (   ) |   | (    \/   | (    \/      ) (         ) (
          | (___) |   | (_____    | |            | |         | |
          |  ___  |   (_____  )   | |            | |         | |
          | (   ) |         ) |   | |            | |         | |
          | (   ) |   /\____) |   | (____/\   ___) (___   ___) (___
TEXT TO   |/     \|   \_______)   (_______/   \_______/   \_______/    BLOCK
````

# TextToASCIIBlock for C++ and Python

This is a small C++ function that converts an Input String to an ASCII Art-like Textblock as Output. SWIG-Binding for Python will be included.

Example:

Input: 
Stewie is cool

Output:
```
 _______    _________    _______                _________    _______             _________    _______              _______     _______     _______     _
(  ____ \   \__   __/   (  ____ \   |\     /|   \__   __/   (  ____ \            \__   __/   (  ____ \            (  ____ \   (  ___  )   (  ___  )   ( \
| (    \/      ) (      | (    \/   | )   ( |      ) (      | (    \/               ) (      | (    \/            | (    \/   | (   ) |   | (   ) |   | (
| (_____       | |      | (__       | | _ | |      | |      | (__                   | |      | (_____             | |         | |   | |   | |   | |   | |
(_____  )      | |      |  __)      | |( )| |      | |      |  __)                  | |      (_____  )            | |         | |   | |   | |   | |   | |
      ) |      | |      | (         | || || |      | |      | (                     | |            ) |            | |         | |   | |   | |   | |   | |
/\____) |      | |      | (____/\   | () () |   ___) (___   | (____/\            ___) (___   /\____) |            | (____/\   | (___) |   | (___) |   | (____/\
\_______)      )_(      (_______/   (_______)   \_______/   (_______/            \_______/   \_______)            (_______/   (_______)   (_______)   (_______/
```
## Installation
### Usage in C++
#### Requirements
* C++ Compiler, I use gcc 9.3.0, but others should work too.
* GNU Make 4.3 or higher if you want to use the makefile
#### Running
For usage in C++ Projects, simply ´#include "ConvString.h"`, only `STL` is required. For an example, you can make the example by running with the provided makefile.

### Usage in Python 
#### Requirements
In order to build the python library I recommend:
* SWIG 3.0.12 or higher
* C++ Compiler, I recommend gcc 9.3.0 or higher
* Python 3 or higher

The software comes with a SWIG interface that allows you to run the decoder in Python.
You can build the software on your machine with the provided `setup.py` file.
Simply run:
``
 swig -c++ -python ascii_block.i
``
Expected output is no output.
``
 python setup.py build_ext --inplace
``
Expected output:
``
running build_ext
building '_ascii_block' extension
creating build
(... Compiler output without errors or warnings ...)

``
Afterwards, run
``
 python test.py
``

Expected output can be seen in the top (Stewie is cool). For an explanation of this, see: https://www.youtube.com/watch?v=3PD8W2OogE0

## Author
Fynn Terhar


## License

- **[MIT license](http://opensource.org/licenses/mit-license.php)**
