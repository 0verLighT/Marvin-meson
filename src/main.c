#include "functions/libft.h"
#include "commands/libcmd.h"

int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	char	*cmd;
	struct cmd *c;

	cmd = argv[1];
	c = commands;
	while (c->name)
	{
		if (!ft_strcmp(cmd, c->name
			return (c->fn(argc - 2, argv + 2);
	}
	if (!ft_strcmp(argv[1], "-h"))
	{
		write(1, "help", 5);
		return (0);
	}
	else if (!ft_strcmp(argv[1], "bbl"))
	{
		// Ajouter la gestion des émotions, de la sortie et du wrapping.
		ft_bbl("help", 1); // "neutral", 20, 1);
		return (0);
	}
	return (1);
}
