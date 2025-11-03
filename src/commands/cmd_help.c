#include "libcmd.h"

int cmd_help(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "help", 5);
	return (0);
}
