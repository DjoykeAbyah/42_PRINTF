/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 17:51:42 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/22 16:54:48 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	main(void)
{
	char	d;
	d = 'z';
	printf("original: %c\n", d);
	ft_printf("mine: %c\n", d);
	printf("test count\n");
	printf("count original: %i\n", printf("%c\n", d));
	ft_printf("count mine: %i\n", ft_printf("%c\n", d));
	printf("---------------------\n");
	char *str;
	str = "nice";
	printf("original: %s\n", str);
	ft_printf("mine: %s\n", str);
	printf("count original: %i\n", printf("%s\n", str));
	ft_printf("count mine: %i\n", ft_printf("%s\n", str));
	printf("---------------------\n");
	int a;
	a = -8;
	printf("original: %i\n", a);
	ft_printf("mine: %i\n", a);
	printf("count original: %i\n", printf("%i\n", a));
	ft_printf("count mine: %i\n", ft_printf("%i\n", a));
	printf("---------------------\n");
	printf("original: %%\n");
	ft_printf("mine: %%\n");
	printf("count original: %i\n", printf("%%\n"));
	ft_printf("count mine: %i\n", ft_printf("%%\n"));
	printf("---------------------\n");
	printf("original: hi hey\n");
	ft_printf("mine: hi hey\n");
	printf("count original: %i\n", printf("hi hey\n"));
	ft_printf("count mine: %i\n", ft_printf("hi hey\n"));
	printf("---------------------\n");
	int b;
	b = 456;
	printf("original: %x\n", b);
	ft_printf("mine: %x\n", b);
	printf("count original: %i\n", printf("%x\n", b));
	ft_printf("count mine: %i\n", ft_printf("%x\n", b));
	printf("---------------------\n");
	int c;
	c = 777;
	printf("original: %X\n", c);
	ft_printf("mine: %X\n", c);
	printf("count original: %i\n", printf("%X\n", c));
	ft_printf("count mine: %i\n", ft_printf("%X\n", c));
	printf("---------------------\n");
	int e;
	e = 56;
	printf("original: %d\n", e);
	ft_printf("mine: %d\n", e);
	printf("count original: %i\n", printf("%d\n", e));
	ft_printf("count mine: %i\n", ft_printf("%d\n", e));
	printf("---------------------\n");
	int f;
	f = 66;
	printf("original: %u\n", f);
	ft_printf("mine: %u\n", f);
	printf("count original: %i\n", printf("%u\n", f));
	ft_printf("count mine: %i\n", ft_printf("%u\n", f));
	printf("---------------------\n");
	printf("original: %p end\n", str);
	ft_printf("mine: %p end\n", str);
	printf("count original: %i \n", printf("result original %p\n", str));
	ft_printf("count mine: %i \n", ft_printf("result mine%p\n", str));
}
