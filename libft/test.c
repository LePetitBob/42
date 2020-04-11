#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("mon ascii : %d\n", ft_isascii(atoi(av[1])));
	printf("ascii :     %d\n\n", isascii(atoi(av[1])));
	printf("mon alnum : %d\n", ft_isalnum(atoi(av[1])));
	printf("alnum :     %d\n\n", isalnum(atoi(av[1])));
	printf("mon alpha : %d\n", ft_isalpha(atoi(av[1])));
	printf("alpha :     %d\n\n", isalpha(atoi(av[1])));
	printf("mon digit : %d\n", ft_isdigit(atoi(av[1])));
	printf("digit :     %d\n", isdigit(atoi(av[1])));
	return 0;
}
