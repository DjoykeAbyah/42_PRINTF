/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 17:51:42 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/24 13:17:26 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("test char\n");
	char	d;
	d = 'z';
	printf("original: %c\n", d);
	ft_printf("mine: %c\n", d);
	printf("test count\n");
	printf("count original: %i\n", printf("%c\n", d));
	ft_printf("count mine: %i\n", ft_printf("%c\n", d));
	printf("---------------------\n");
	printf("test string\n");
	char *str;
	str = "nice";
	printf("original: %s\n", str);
	ft_printf("mine: %s\n", str);
	printf("count original: %i\n", printf("%s\n", str));
	ft_printf("count mine: %i\n", ft_printf("%s\n", str));
	printf("---------------------\n");
	printf("test int\n");
	int a;
	a = -8;
	printf("original: %i\n", a);
	ft_printf("mine: %i\n", a);
	printf("count original: %i\n", printf("%i\n", a));
	ft_printf("count mine: %i\n", ft_printf("%i\n", a));
	printf("---------------------\n");
	printf("test percentage\n");
	printf("original: %%\n");
	ft_printf("mine: %%\n");
	printf("count original: %i\n", printf("%%\n"));
	ft_printf("count mine: %i\n", ft_printf("%%\n"));
	printf("---------------------\n");
	printf("test text\n");
	printf("original: hi hey\n");
	ft_printf("mine: hi hey\n");
	printf("count original: %i\n", printf("hi hey\n"));
	ft_printf("count mine: %i\n", ft_printf("hi hey\n"));
	printf("---------------------\n");
	printf("test hexlower\n");
	int b;
	b = 456767;
	printf("original: %x\n", b);
	ft_printf("mine: %x\n", b);
	printf("count original: %i\n", printf("%x\n", b));
	ft_printf("count mine: %i\n", ft_printf("%x\n", b));
	printf("---------------------\n");
	printf("test hexupper\n");
	int c;
	c = 8888;
	printf("original: %X\n", c);
	ft_printf("mine: %X\n", c);
	printf("count original: %i\n", printf("%X\n", c));
	ft_printf("count mine: %i\n", ft_printf("%X\n", c));
	printf("---------------------\n");
	printf("test decimal base 10\n");
	int e;
	e = 56;
	printf("original: %d\n", e);
	ft_printf("mine: %d\n", e);
	printf("count original: %i\n", printf("%d\n", e));
	ft_printf("count mine: %i\n", ft_printf("%d\n", e));
	printf("---------------------\n");
	printf("test unsigned decimal base 10\n");
	int f;
	f = -5;
	printf("original: %u\n", f);
	ft_printf("mine: %u\n", f);
	printf("count original: %i\n", printf("%u\n", f));
	ft_printf("count mine: %i\n", ft_printf("%u\n", f));
	printf("---------------------\n");
	printf("test pointer\n");
	printf("original: %p end\n", str);
	ft_printf("mine: %p end\n", str);
	printf(" %i", printf(" %p\n", str));
	ft_printf(" %i", ft_printf(" %p\n", str));
	printf("\n---------------------\n");
	printf("random tests\n");
	ft_printf("my ft_printf: %%%\0ddjjddjj");
	printf("\n---------------------\n");
	ft_printf("my ft_printf: hey\0ddjjddjj");
	printf("\n---------------------\n");
	printf("test francinette string\n");
	printf(" NULL %s NULL ", NULL);
	printf("count original: %i\n", printf(" NULL %s NULL ", NULL));
	printf("\n---------------------\n");
	ft_printf(" NULL %s NULL ", NULL);
	ft_printf("count mine: %i\n", ft_printf(" NULL %s NULL ", NULL));
	printf("\n---------------------\n");

	
	printf("test francinette pointer\n");
	printf(" %p %p ", 0, 0);
	printf("count original: %i\n", printf(" %p %p ", 0, 0));
	printf("\n---------------------\n");
	ft_printf(" %p %p ", 0, 0);
	ft_printf("count mine: %i\n", ft_printf(" %p %p ", 0, 0));
	printf("\n---------------------\n");

	
	printf("test francinette pointer\n");
	printf("%p", NULL);
	printf("count original: %i\n", printf("%p", NULL));
	printf("\n---------------------\n");
	ft_printf("%p", NULL);
	ft_printf("count mine: %i\n", ft_printf("%p", NULL));
	printf("\n---------------------\n");

	printf("test francinette hexlow\n");
	printf(" %x ", 9223372036854775807);
	printf("count original: %i\n", printf(" %x ", 9223372036854775807));
	ft_printf(" %x ", 9223372036854775807);
	ft_printf("count mine: %i\n", ft_printf(" %x ", 9223372036854775807));
	
}
