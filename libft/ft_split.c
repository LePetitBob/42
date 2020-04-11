#include "libft.h"

char	**ft_split(const char *s, char c)
{
	int i;
	int j;
	char **res;
	int mot; 

	i = 0;
	res = malloc(sizeof(char*) * (ft_nbmots(s) + 1));
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = 0;
		while (s[i + j] != c && s[i + j])
			j++;
		res[mot] = ft_strndup(s + i, j);
	}
