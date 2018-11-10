#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include "get_next_line.h"

int		main(void)
{
	char	*str;
	int		fd;

	fd = open("voina.txt", O_RDONLY);
	while (get_next_line(fd, &str) > 0)
	{
		printf("%s\n", str);
	}
}
