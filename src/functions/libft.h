#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		bbl(char *str, char *emot, size_t size_len, int fd);
char	*lenfill(const char *str, char c, size_t len);
char	*setalloc(char c, size_t len);

#endif
