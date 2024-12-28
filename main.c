#include "get_next_line_bonus.h"
#include <stdio.h>

int	main(void)
{
	int fd = open("test.txt", O_RDWR | O_CREAT);

	char *line = get_next_line(fd);

	write(fd, "okkoko", 6);
	close(fd);
}