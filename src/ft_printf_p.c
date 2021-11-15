/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:39:56 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/15 12:56:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_base(unsigned long long n, char *base, int *i_len)
{
	if (n >= ft_strlen(base))
	{
		*i_len = *i_len + 1;
		ft_putnbr_base(n / ft_strlen(base), base, i_len);
	}
	ft_putchar_fd(base[n % ft_strlen(base)], 1);
}

void	ft_printf_p(void *hex, t_len *len)
{
	int				i_len;

	
	i_len = 0;
	if (!hex && !IS_MACOS)
	{
		ft_putstr_fd("(nil)", 1);
		len->len += 3;
	}
	else if (!hex)
	{
		ft_putstr_fd("0x0", 1);
		len->len += 3;
	}
	else
	{
	ft_putstr_fd("0x", 1);
	ft_putnbr_base((unsigned long)hex, HEX_L, &i_len);
	len->len += i_len + 3;
	}
}