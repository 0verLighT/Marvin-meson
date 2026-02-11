#include "libcmd.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*txt;
	int		line_len;
	int		fd;

	i = 1;
	txt = "Hello, my name is Marvin and I\'m the Paranoid Assistant";
	line_len = 30;
	fd = 1;
	while (argv[i] && i < argc)
	{
		if ((!strcmp(argv[i], "-t")
				|| strcmp(argv[i], "--text")) && argv[i + 1])
		{
			i++;
			txt = argv[i];
		}
		i++;
	}
	bubble(txt, line_len, fd);
	return (0);
}
