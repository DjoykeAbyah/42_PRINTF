/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_unsigned.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 12:43:37 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/23 20:17:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	howmuch(unsigned int a)
{
	int	i;

	i = 0;
	if (a <= 0)
		i = i + 1;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

static void	change_nbr(unsigned int n, int fd)
{
	if (n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

int	print_unsigned(unsigned int n, int fd)
{
	int	count;

	count = howmuch(n);
	change_nbr(n, fd);
	return (count);
}
