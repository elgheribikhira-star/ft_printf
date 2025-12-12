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

## Ressources
- To understand the concept of `printf`, I used the following, ressources : 
 [man printf](https://www.ibm.com/docs/en/i/7.5.0?topic=output-printf)
  
- And to learn about varidadics function which was a new concept for me, I used :
 [variadic](https://www.geeksforgeeks.org/c/variadic-functions-in-c/)

AI was udsed to:
- help me understand a concept
- act as a tutor to explain me certain notion in details

## Algorithms and data structures



`int ft_printf(char *str, ...);`

This function takes a format string and a variable number of arguments. It writes formatted output to the standard output and  returns an int, which represents the total number characters printed, or -1 if an error occurs. 

#### Algorithm ft_printf
The algorithm is based on a loop over the format string.

- If the current character is  '%' : The next character is read as a conversion specifier (c, s, p, d, i, u, x, X,%); ft_handles is called with this specifier and the variadic argument list ; ft_handle retrieves the corresponding argument with va_arg, calls the appropriate helper function(character, string, integer, hexadecimal, etc) and returns the numbers characters printed.
- If the current character is not '%' : it is writting directly to the standard output ,(for example using `write(1,&str[i],1)`); if the write is successful, the counter is incremented by 1 ; if write returns -1, the error is propagated by returning -1. 

When the end of the format string is reached, we call va_end and return the total number of the string.

### Data structures 
The implementation if `ft_printf` only uses simple C types and a few helper constructs :
- `int` used to store the return value of `ft_printf` 
- `unsigned int` used for conversions that requires non-negative values, such as `%u`, `%x`,and `%X`
- `char `and `char *` used to represent characters and strings, both for the format string and for the values printed(for examples %c and %s)
- `va_list` (from `stdarg.h`)used to manage the variadic arguments. It remembers where we are in the list of arguments and is used with `va_start` `va_arg` and `va_end` to retrieve each value corresponding to a format specifier.



