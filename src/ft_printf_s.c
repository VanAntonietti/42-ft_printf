/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:34:10 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/14 16:55:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_printf_s(char *str, t_len *len)
{
    if(str == NULL)
        str = ft_strdup("(null)");
    ft_putstr_fd(str, 1);
    len->len += ft_strlen(str);
}
