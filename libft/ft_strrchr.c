/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:34:25 by vduriez           #+#    #+#             */
/*   Updated: 2020/06/16 15:34:27 by vduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

char	*strrchr(const char *s, int c)
{
	int i;

	if (!c)
		return (char*(*s + ft_strlen(s)));
	i = ft_strlen(s);
	while (i >= 0)
	{
		if s([i] == c)
			return (char*((*s + ft_strlen(s)) - i));
		i--;
	}

}
