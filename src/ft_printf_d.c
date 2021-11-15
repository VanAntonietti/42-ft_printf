/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:51:44 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/15 11:56:19 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(unsigned int dec, t_len *len)
{
    char   *str;

    str = ft_itoa(dec);
    ft_putstr_fd(str, 1);
    len->len += ft_strlen(str);
    free(str);
}