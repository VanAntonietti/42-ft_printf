/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:28:46 by vantonie          #+#    #+#             */
/*   Updated: 2021/11/14 18:53:40 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	if (n < 0)
		return (1 + ft_len(-n));
	if (n <= 9)
		return (1);
	else
		return (1 + ft_len(n / 10));
}

static void	ft_fill(char *str, int n, int size)
{
	if (n < 0)
	{
		str[0] = '-';
		n = (n * -1);
	}
	if (n > 9)
		ft_fill(str, n / 10, size - 1);
	str[size] = (n % 10) + 48;
}

char	*ft_itoa(long int n)
{
	int		size;
	char	*str;
	int		i;

	i = 0;
	if (n <= INT_MIN)
	{
		n = -INT_MAX;
		i = 1;
	}
	size = ft_len(n);
	str = malloc(size + 1 * sizeof(char));
	if (str == 0)
	{
		return (NULL);
	}
	ft_fill(str, n, --size);
	if (i == 1)
	{
		str[size] = str[size] + 1;
	}
	return (str);
}
