#ifndef LIBCMD_H
# define LIBCMD_H

// TYPEDEF
typedef int	(*cmd_func) (int argc, char **argv);

// STRUCT
struct		cmd
{
    const char	*name;
    cmd_func	fn;
};

struct		cmd_path
{
    const char	*name;
    const char	*path;
};

// INCLUDES
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int	cmd_help(int argc, char **argv);
int cmd_update(int argc, char **argv);

#endif
