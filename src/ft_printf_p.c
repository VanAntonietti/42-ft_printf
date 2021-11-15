/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an7onie77i <an7onie77i@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:39:56 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/14 21:41:01 by an7onie77i       ###   ########.fr       */
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
	else
	{
	ft_putchar_fd(base[n % ft_strlen(base)], 1);
	}
}

void	ft_printf_p(void *str, t_len *len)
{
	int				i_len;

	i_len = 0;
	ft_putstr_fd("0x", 1);
	ft_putnbr_base((unsigned long)str, HEX_L, &i_len);
	len->len += 11;
}