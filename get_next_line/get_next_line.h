#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int
	get_next_line(char **line);
int
	get_next_line_copy(char **line, int fd);
#endif