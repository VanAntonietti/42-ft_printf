/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: an7onie77i <an7onie77i@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:53:24 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/10 00:13:39 by an7onie77i       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/ft_printf.h"

static int	ft_printf_sort(const char *format, int i, va_list ap)
{
	
	if (format[i] == 'c')
		return(ft_printf_c(va_arg(ap, int)));
		
	return(0);
}

static char	*ft_vfprintf(const char *format, va_list ap)
{
	int			i;

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_printf_sort(&format[i], i, ap);
		}
		ft_putchar_fd(format[i], 1);
		i++;
	}
	return(0);
}

int	ft_printf(const char *format, ...)
{
	va_list		ap;

	va_start(ap, format);
	ft_vfprintf(format, ap);
	va_end(ap);
	return(0);
}
