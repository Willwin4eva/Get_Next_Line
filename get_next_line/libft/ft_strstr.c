/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 13:41:01 by olboothe          #+#    #+#             */
/*   Updated: 2019/03/07 13:41:45 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (!ft_memcmp(haystack++, needle, len))
			return ((char *)haystack - 1);
	}
	return (NULL);
}
