/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an7onie77i <an7onie77i@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:54:10 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/10 00:13:40 by an7onie77i       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include "../libft/libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef enum e_bool {TRUE = 1, FALSE = 0}	t_bool;

int	        ft_printf_c (const int c);
void	    ft_printf_d(unsigned long int dec, va_list ap);
void	    ft_printf_i(unsigned long int dec, va_list ap);
int	        ft_printf_p(unsigned long int ptr, va_list ap);
int	        ft_printf_s(const char *str, va_list ap);
void    	ft_printf_u(unsigned long int dec, va_list ap);
int	        ft_printf_x(unsigned int hex, va_list ap);
int			ft_printf(const char *str, ...);
static char	*ft_vfprintf(const char *format, va_list ap);
static int	ft_printf_sort(const char *format, int i, va_list ap);

#endif