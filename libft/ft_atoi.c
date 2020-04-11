#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int i;
	int signe;
	int somme;

	i = 0;
	signe = 1;
	somme = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
		signe = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		somme = 10 * somme + (nptr[i] - 48);
		i++;
	}
	return (somme * signe);
}
