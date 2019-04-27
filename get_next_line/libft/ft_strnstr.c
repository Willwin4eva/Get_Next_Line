/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 13:44:47 by olboothe          #+#    #+#             */
/*   Updated: 2019/03/14 07:40:03 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *large, const char *small, size_t len)
{
	char	c;
	char	sc;
	size_t	llen;

	if ((c = *small++) != '\0')
	{
		llen = ft_strlen(small);
		while (1)
		{
			while (1)
			{
				if (len-- < 1 || (sc = *large++) == '\0')
					return (NULL);
				if (sc == c)
					break ;
			}
			if (llen > len)
				return (NULL);
			if (ft_strncmp(large, small, llen) == 0)
				break ;
		}
		large--;
	}
	return ((char *)large);
}
