char	*ft_setalloc(char c, size_t len)
{
	char	*res;

	res = malloc((len + 1) * sizeof(char));
	ft_memset(res, c, len);
	return (res);
}
