#include "libcmd.h"

typedef int	(*cmd_func) (int argc, char **argv);

struct		cmd
{
	const char	*name;
	cmd_func	fn;
}

struct cmd	commands[];

commands = {
	{"-h", cmd_help},
	{"bbl", cmd_bbl},
	{NULL, NULL},
}
