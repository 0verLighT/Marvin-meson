#include "libft.h"

void	ft_bbl(char *str, int fd) // , char *emot, size_t size_len);
{
	size_t	len;
	char	*fillstr;

	len = ft_strlen(str);
	fillstr = ft_lenfill(str, ' ', len);
	write(fd, fillstr, len);
}
