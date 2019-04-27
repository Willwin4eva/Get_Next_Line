/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:46:26 by olboothe          #+#    #+#             */
/*   Updated: 2019/04/08 21:46:41 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strarrmax(char **arr)
{
	int		i;
	int		max;
	int		curr_len;

	i = -1;
	max = 0;
	while (arr[++i])
	{
		curr_len = ft_strlen(arr[i]);
		if (curr_len > max)
			max = curr_len;
	}
	return (max);
}
