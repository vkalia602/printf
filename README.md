# _printf()  ( An alternate implementation of printf() )

_printf() is a c program that recreates some of the functionalities of the printf function in the C standard library.

Like printf, _printf will interpolate data into a base string as needed.  Currently _printf supports the following types of data.  Syntax for triggering interpolation is the same as in standard printf. (Insert one of the flags mentioned below within a string to be printed, then follow the string with the argument you wish to be interpolated into the main string)


|  **Flag**    |              ** Data **                  |
|--------------|------------------------------------------|
|     %c       |    Prints a single character             |
|     %s       |    Prints a string                       |
|     %d       |    Prints an integer number              |
|     %i       |    Prints an integer number              |


## File Descriptions

|  ** Name **   |             ** Contains **                       |
|---------------|--------------------------------------------------|
| char_func.c   | Functions related to printing chars and strings  |
| holberton.h   | Function prototypes                              |
| misc_func.c   | Other helper functions                           |
| numb_func.c   | Function related to printing numbers             |
| printf.c      | The main _printf program functions               |
| README.md     | This readme file                                 |

## Usage
Clone this repository, then include the "holberton.h" header file in your projects.

```
#include "holberton.h"

int main(void)
{
	_printf("Hello %s\n", "World");

	return (0);
}

```

Sample output:

```
$ Hello World
```

## Authors
*Sue Kalia* - [Github](https://github.com/vkalia602) 

*Henry Hsu* - [Github](https://github.com/henryh28) 
