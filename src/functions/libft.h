#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int 	ft_strcmp(char *str, char *cmp);
size_t	ft_strlen(char *str);
void	ft_bbl(char *str, int fd);
char	*ft_lenfill(char *str, char c, size_t len);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_setalloc(char c, size_t len);
char	*ft_strcpy(char *dest, char *src);

#endif
