#include "libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int		main()
{
	char **line;
	char	*str;
	int  fd;

	line = &str;
	str = malloc(20);

	fd = open("text", O_RDONLY);
	get_next_line(fd,line);
	printf("line : %s\n", *line);

//printf("%zd", read(fd,str, 10));
}
