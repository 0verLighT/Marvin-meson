#include "libftmarvin.h"

int main(int argc, char **argv)
{
	(void)argc;
	if (!ft_strcmp(argv[1], "-h"))
	{
		write(1, "help", 5);
		return (0);
	}
	else if (!ft_strcmp(argv[1], "bbl"))
	{
		// Ajouter la gestion des émotions, de la sortie et du wrapping.
		ft_bbl_fd("help", "neutral", 20, 1);
		return (0);
	}
	return (0);
}
