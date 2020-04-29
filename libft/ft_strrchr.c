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
