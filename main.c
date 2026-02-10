#include "libcmd.h"
#include "list_cmd.h"

int main(int argc, char **argv)
{
	char	*cmd;
	struct cmd *cmd_list;

	if (argc < 2)
		return (1);
	cmd = argv[1];
	cmd_list = commands_list;
	while (cmd_list->name)
	{
		if (!strcmp(cmd, cmd_list->name))
			return (cmd_list->fn(argc - 2, argv + 2));
		cmd_list++;
	}
	return (1);
}
