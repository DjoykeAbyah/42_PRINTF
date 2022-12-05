/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_nbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 16:39:39 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/30 19:05:58 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	int		count;
	char	*nbr;

	count = -1;
	nbr = ft_itoa(n);
	if (nbr != NULL)
	{
		count = write (1, nbr, ft_strlen(nbr));
		free (nbr);
	}
	return (count);
}
