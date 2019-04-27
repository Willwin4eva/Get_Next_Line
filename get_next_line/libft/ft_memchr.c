/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 22:26:59 by olboothe          #+#    #+#             */
/*   Updated: 2019/04/08 01:25:16 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *sp;

	sp = (unsigned char*)s;
	while (n--)
	{
		if (*sp == (unsigned char)c)
			return (sp);
		sp++;
	}
	return (NULL);
}
