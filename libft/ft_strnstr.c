#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
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
			while (little && big[i + j] == little[j] && j < len)
				j++;
			if (!little[j] || j == len)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
