/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 23:26:55 by olboothe          #+#    #+#             */
/*   Updated: 2019/03/07 23:27:54 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_intlen(int value)
{
	int		len;

	len = 0;
	if (value < 0)
		len++;
	while (value)
	{
		len++;
		value /= 10;
	}
	return (len);
}

static char	*st_intmax(void)
{
	char	*buf;

	buf = ft_strnew(st_intlen(-2147483648) + 1);
	ft_strcpy(buf, "-2147483648");
	return (buf);
}

char		*ft_itoa(int n)
{
	char	*buf;
	int		j;

	if (n == -2147483648)
		return (st_intmax());
	buf = ft_strnew(st_intlen(n) + 1);
	j = st_intlen(n) - 1;
	if (buf)
	{
		if (n < 0)
		{
			buf[0] = '-';
			n *= -1;
		}
		if (n == 0)
			*buf = '0';
		while (n > 0)
		{
			buf[j] = '0' + (n % 10);
			n /= 10;
			j--;
		}
	}
	return (buf);
}
