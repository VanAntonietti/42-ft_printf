/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:54:10 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/15 13:15:26 by vantonie         ###   ########.fr       */
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
# define DEC "0123456789"
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
void	ft_printf_d(unsigned int dec, t_len *len);
void	ft_printf_i(unsigned int dec, t_len *len);
void	ft_printf_p(void *hex, t_len *len);
void	ft_printf_percentage (t_len *len);
void	ft_printf_s(char *str, t_len *len);
void	ft_printf_u(unsigned int dec, t_len *len);
void	ft_printf_x(unsigned int hex, t_len *len);
void	ft_printf_xu(unsigned int hex, t_len *len);

#endif