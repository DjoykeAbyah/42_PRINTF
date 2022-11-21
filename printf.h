/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   printf.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 15:20:56 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/18 18:09:07 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "../Libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	print_nbr(int n, int fd);
int	print_char(char c, int fd);

#endif