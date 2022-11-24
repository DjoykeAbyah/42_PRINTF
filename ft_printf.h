/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 19:56:37 by dreijans      #+#    #+#                 */
/*   Updated: 2022/11/24 13:22:08 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_nbr(int n, int fd);
int	print_char(char c);
int	print_hexlow(unsigned int n);
int	print_hexup(unsigned int n);
int	print_str(char *s);
int	print_unsigned(unsigned int n, int fd);
int	print_pointer(unsigned long int n);

#endif