# _printf
In this project, we have built our own version of printf. It functions as per the real printf and handles format specifiers as printf would. Although not as extensive as printf is, our function covers quite a large area of format specifiers. From characters to integers, we also cover base conversion.
## Getting Started
To acquire _printf for usage, simply gather all files from the master branch by cloning the repo to the terminal.
### Prerequisites
No prerequisites required to install _printf as there is no installation involved.
### Installing
To run _printf, simply call the function in your code your main file and compile all files that exists in the master branch. To be able to call the function, be sure to include the header file with:
```#include "holberton.h"```
Once you are ready, you can compile all necessary files along with main file by typing to your command line in terminal:
```gcc *.c```
Flags you may want to use while compiling include, but are not limited to:
* -Wall
* -Werror
* -Wextra
* -pedantic
This will compile all files with ".c" extension.
### Examples
To test each specifier format, you may copy this as your main.c file:
```
#include "holberton.h"

int main(void)
{
	_printf("Character: %c\n", 'A');
	_printf("String: %s\n", "This is my string.");
	_printf("Percent: %%\n");
	_printf("Decimal: %d\n", 135);
	_printf("Negative decimal: %d\n", -135);
	_printf("Integer: %i\n", 246);
	_printf("Negative integer: %i\n", -246);
	_printf("Unsigned: %u\n", 2356);
	_printf("Binary: %b\n", 1245);
	_printf("Octal: %o\n", 1357);
	_printf("Hexadecimal: %x, %X\n", 2468, 2468);
	_printf("Reverse string: %r\n", "This is my string.");
	_printf("Rot13: %R\n", "This is my string.");
	return (0);
}
```
## Authors
* [Banu Sapakova](https://github.com/banuaksom)
* [Alia Vang](https://github.com/aliavang)
## Acknowledgments
All the beautiful and intelligent people at Holberton as well our loving and supportive family and friends who helped with this project!