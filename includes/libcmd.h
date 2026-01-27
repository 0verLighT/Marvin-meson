#ifndef LIBCMD_H
# define LIBCMD_H

# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef int	(*cmd_func) (int argc, char **argv);

struct		cmd
{
    const char	*name;
    cmd_func	fn;
};

extern struct cmd commands_list[];

int	cmd_help(int argc, char **argv);
int cmd_update(int argc, char **argv);

#endif
