#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sysy/types.h>
#include <sysy/stat.h>
#include <fcntl.h>

void	ft_read(size_t count)
{
	char *res;
	int fd;

	res = malloc(count * sizeof(char));
	fd = fopen("test.txt", O_RDONLY);
	
	printf("%s", res);
}
