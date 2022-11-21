/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 17:51:42 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/21 18:56:49 by dreijans      ########   odam.nl         */
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
	printf("original: %i\n", printf("%c\n", d));
	ft_printf("mine: %i\n", ft_printf("%c\n", d));
	printf("---------------------\n");
	char *str;
	str = "nice";
	printf("original: %s\n", str);
	ft_printf("mine: %s\n", str);
	printf("---------------------\n");
	int a;
	a = -8;
	printf("original: %i\n", a);
	ft_printf("mine: %i\n", a);
	printf("---------------------\n");
	printf("original: %%\n");
	ft_printf("mine: %%\n");
	printf("---------------------\n");
	printf("original: hi hey\n");
	ft_printf("mine: hi hey\n");
	printf("---------------------\n");
	int b;
	b = 456;
	printf("original: %x\n", b);
	ft_printf("mine: %x\n", b);
	printf("---------------------\n");
	int c;
	c = 777;
	printf("original: %X\n", b);
	ft_printf("mine: %X\n", b);
}
