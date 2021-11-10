/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:52:35 by vantonie          #+#    #+#             */
/*   Updated: 2021/09/28 00:01:31 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(str) + 1;
	cpy = ft_calloc(len, sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(cpy, str, len);
	return (cpy);
}
