/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_nbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 16:39:39 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/18 18:09:05 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	howmuch(int a)
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

int	print_nbr(int n, int fd)
{
	int	count;

	count = howmuch(n);
	ft_putnbr_fd(n, fd);
	return (count);
}
