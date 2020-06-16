/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduriez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/16 15:49:15 by vduriez           #+#    #+#             */
/*   Updated: 2020/06/16 16:05:52 by vduriez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"
//#include <string.h>

char	*ft_strjoin.c(char *s1, char *s2)
{
	char *s3;
	int i;
	int j;

	i = 0;
	j = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i] = s1[j];
		i++;
		j++;
	}
	s3[i] = 0;
	return (s3);
}
