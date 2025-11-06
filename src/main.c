#include "commands/libcmd.h"

int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	char	*cmd;
	struct cmd *c;

	cmd = argv[1];
	c = commands_list;
	while (c->name)
	{
		if (!strcmp(cmd, c->name))
			return (c->fn(argc - 2, argv + 2));
		c++;
	}
	return (1);
}
