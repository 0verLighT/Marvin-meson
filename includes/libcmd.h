#ifndef LIBCMD_H
# define LIBCMD_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <sys/wait.h>
# include "libft.h"

typedef int	(*t_cmd_function) (int argc, char **argv);

typedef struct s_cmd
{
	const char		*name;
	t_cmd_function	fn;
}				t_cmd;

typedef struct s_cmd_path
{
	const char	*name;
	const char	*path;
}				t_cmd_path;

int	cmd_help(int argc, char **argv);
int	cmd_update(int argc, char **argv);

#endif
