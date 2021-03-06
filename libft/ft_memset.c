/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:33:29 by vduriez           #+#    #+#             */
/*   Updated: 2020/06/16 15:33:31 by vduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		(unsigned char*)s + i = c;
		i++;
	}
	return ((void*)s);
}
