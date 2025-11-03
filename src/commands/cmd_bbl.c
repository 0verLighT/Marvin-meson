#include ""

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
	while (argv[i])
	{
		if ((ft_strcmp(argv[i], "-t" || ft_strcmp(argv[i], "--text") && argv[i + 1])
		{
			txt = argv[i + 1];	
		}
		i++;
	}
	ft_bbl(argv[0]
	return (0);
}
