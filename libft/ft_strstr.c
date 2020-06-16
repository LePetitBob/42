/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:34:48 by vduriez           #+#    #+#             */
/*   Updated: 2020/06/16 15:34:52 by vduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	if (!little)
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little && big[i + j] == little[j])
				j++;
			if (!little[j])
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
