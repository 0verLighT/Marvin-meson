#include "libft.h"

int	bbl(char *str, char *emot, size_t size_len, int fd)
{
	size_t	len;
	char	*fillstr;

	(void)size_len;
	(void)emot;
	len = strlen(str);
	fillstr = lenfill(str, ' ', len);
	write(fd, fillstr, len);
	return (0);
}
