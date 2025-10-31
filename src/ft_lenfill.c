#include "libftmarvin.h"

char	*ft_lenfill(char *str, char c, size_t len)
{
	size_t	slen;
	char	*res;
	char	*pre;
	char	*post;

	if (!str || !c)
		return (NULL);
	slen = ft_strlen(str);

	if (len > slen)
		slen = len;
	res = ft_strcpy("", str);
	pre = ft_setalloc(c, (slen - ft_strlen(str)) / 2);
	if ((slen - ft_strlen(str)) % 2)
		post = ft_setalloc(c, (slen - ft_strlen(str)) / 2 + 1);
	else
		post = ft_setalloc(c, (slen - ft_strlen(str)) / 2);
	ft_strjoin(pre, res);
	ft_strjoin(res, post);
	return (res);
}
