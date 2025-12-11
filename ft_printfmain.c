
#include <stdio.h>

#include "ft_printf.h"
#include <limits.h>


// int main()
// {
//     // int c = 42;
    // int c2 = -42;
    // int c3 = -84;
    // int d = INT_MAX;
    // int e = INT_MIN;
    // unsigned int u1 = UINT_MAX;
    // unsigned int u2 = 0;
    // char    *str = "hello";
    // char	*s2 = "khira";
	// char	*empty = "";
	// int	r1;
	// int	r2;

	//test avec %c et retour
    // r1 = printf("%c\n", 'a');
    // r2 = ft_printf("%c\n", 'a');
	// printf("retour : %d\n %d\n", r1, r2);

	//test avec %s
	// printf("%s\n", str);
	// ft_printf("%s\n", str);
	//null
	// r1 = printf("%s\n", NULL);
	// r2 = ft_printf("%s\n", NULL);
	// printf("retour printf vs ft_printf %d\n %d\n", r1, r2);
	//chaine vide
	// r1 = printf("%s\n", empty);
	// r2 = ft_printf("%s\n", empty);
	// printf("retour printf %d\n vs ft_printf %d\n", r1, r2);

	//test %x
	// printf("%x\n", c);
	// ft_printf("%x\n", c);
	// printf("%x\n", c2);
	// ft_printf("%x\n", c2);

	//test %X
	// printf("%X\n", c);
	// ft_printf("%X\n", c);
	// printf("%X\n", c2);
	// ft_printf("%X\n", c2);

	//test %p
	// printf("%p\n", &c2);
	// ft_printf("%p\n", &c2);

	//test %d
	// printf("%d\n", d);
	// ft_printf("%d\n", d);
	// printf("%d\n", e);
	// ft_printf("%d\n", e);

	//test %i
	// printf("%i\n", d);
	// ft_printf("%i\n", d);
	// printf("%i\n", e);
	// ft_printf("%i\n", e);

	//test %u
	// printf("%u\n",u1);
	// ft_printf("%u\n",u1);
	// printf("%u\n",c2);
	// ft_printf("%u\n",c2);



	//test %%
	// printf("%%");
	// ft_printf("%%");

	// printf("abc%%\n");
	// ft_printf("abc%%");

	//test quand printf retourne -1
// 	fclose(stdout);

// 	int	result = printf("Bonjour\n");
// 	fprintf(stderr, "%d", result);
// 	return(0);

// }


#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1;
    int ret2;

    ret1 = ft_printf("Hello %s %d\n", "world", 42);
    ret2 = printf("Hello %s %d\n", "world", 42);
    printf("ret ft_printf = %d | ret printf = %d\n", ret1, ret2);
    return (0);
}