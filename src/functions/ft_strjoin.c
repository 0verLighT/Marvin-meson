#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*joinstr;

	i = 0;
	len = ft_strlen(s1);
	len += ft_strlen(s2);
	joinstr = malloc((len) * sizeof(char));
	if (!joinstr)
		return (NULL);
	while (s1[i])
	{
		joinstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joinstr[i] = s2[j];
		i++;
		j++;
	}
	joinstr[i] = '\0';
	return joinstr;
}
