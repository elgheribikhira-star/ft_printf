# This project has been created as part of the 42 curriculum by kel-gher

## Description
This project, named `ft_printf`, is a reimplementation of the `printf` function. It is a variadic function that returns the number of characters printed and handles the following conversions :

- %c : prints a single character.
- %s : prints a string
- %d : prints a signed decimal integer
- %i : prints a signed decimal integer
- %u : prints an unsigned decimal integer
- %p : prints a pointer address
- %x : prints a hexadecimal number in lowercase
- %X : prints a hexadecimal number in uppercase
- %% : prints a percent sign

## Instructions 
The project compile into a static library called libftprintf.a in our Makefile . 
To compile the library simply run :
cc main.c linftprintf.a
The Makefile provides the following rules and variables :

- all : builds the library libftprintf.a
- clean : removes all object files
- fclean : removes all object files and libftprintf.a
- re : runs fclean and then rebuilds the library
- CFLAGS : I use the flags to enable important warnings.
- SRC : where I put all of my C files that I use

##Ressources
To understand the concept of `printf`, I used the following, ressources : 
- [man printf](https://www.ibm.com/docs/en/i/7.5.0?topic=output-printf)
And to learn about varidadics function which was a new concept for me, I used :
- [variadic](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)

AI was udsed to:
- help me understand a concept
- act as a tutor to explain me certain notion in details

##Algorithms and data structures
The functions has a prototypes 
###Prototypes
```c
int ft_printf(const char *format, ...);
int ft_handle(char specifier, va_list *args);





##Algorithms and data structures


