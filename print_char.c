/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_char.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 18:08:14 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/18 18:12:26 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	print_char(char c, int fd)
{
	int	i;

	i = 0;
	write(1, &c, 1);
	i++;
	return (i);
}
