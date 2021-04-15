#include "get_next_line.h"
#include <fcntl.h>
int 
	main(void)
{
	char *line;
	int ret;
	int fd;

	fd = open("testfile.txt", O_RDONLY);
	while ((ret = get_next_line_copy(&line, fd)) > 0)
	{
		printf("%s\n", line);
		//printf("%i\n", ret);
		free(line);
	}	
	printf("%s\n", line);
	printf("%i", ret);
	return (0);
}
