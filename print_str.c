/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 12:08:54 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/25 15:20:59 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	if (s == '\0')
	{
		return (write (1, "(null)", 6));
	}
	else
		return (write (1, s, ft_strlen(s)));
}

/*
write returns how much it wrote
*/