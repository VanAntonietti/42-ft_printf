/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percentage.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:14:24 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/18 09:36:31 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_percentage(t_len *len)
{
	ft_putchar_fd('%', 1);
	len->len += 1;
}
