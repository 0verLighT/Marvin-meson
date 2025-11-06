#include "libcmd.h"

int	cmd_bbl(int argc, char **argv)
{
	size_t	i;
	char	*txt;
	char	*emot;
	int		llen;
	int		fd;

	i = 0;
	txt = "Marvin, the Paranoid Assistant";
	emot = "neutral";
	llen = 30;
	fd = 1;
	while (argv[i] && i < (size_t) argc)
	{
		if ((!strcmp(argv[i], "-t") || strcmp(argv[i], "--text")) && argv[i + 1])
		{
			txt = argv[i + 1];
		}
		i++;
	}
	bbl(txt, emot, llen, fd);
	return (0);
}
