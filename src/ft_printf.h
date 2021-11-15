/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an7onie77i <an7onie77i@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:54:10 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/14 21:39:13 by an7onie77i       ###   ########.fr       */
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
# define HEX "0123456789ABCDEF"
# define HEX_L "0123456789abcdef"
# if __APPLE__
#  define IS_MACOS 1
# else
#  define IS_MACOS 0
# endif

typedef struct s_len{
	int len;
    int i;
}			t_len;

typedef enum e_bool {TRUE = 1, FALSE = 0}	t_bool;

int		ft_printf(const char *str, ...);
void	ft_printf_c(int i, t_len *len);
void	ft_printf_d(int dec, t_len *len);
void	ft_printf_i(unsigned long int dec, t_len *len);
void	ft_printf_p(void *ptr, t_len *len);
void	ft_printf_s(char *str, t_len *len);
void	ft_printf_u(unsigned int dec, t_len *len);
void	ft_printf_x(unsigned int hex, t_len *len);
void	ft_printf_xu(unsigned int hex, t_len *len);

#endif