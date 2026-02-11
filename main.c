#include "libcmd.h"
#include "list_cmd.h"

int	ft_secondary_cmd(char *argv[], char *env[])
{
	char	*cmd_path;
	pid_t	pid;

	cmd_path = getenv("HOME");
	strcat(cmd_path, "/.marvin/bin/");
	strcat(cmd_path, argv[1]);
	if (!access(cmd_path, X_OK))
	{
		pid = fork();
		if (pid == -1)
			return (1);
		if (pid == 0)
		{
			execve(cmd_path, argv + 1, env);
			exit(0);
		}
		waitpid(pid, NULL, 0);
		return (0);
	}
	printf("Command doesn\'t exist.");
	return (1);
}

int	ft_primary_cmd(int argc, char *argv[])
{
	char		*cmd;
	t_cmd	*cmd_list;

	cmd = argv[1];
	cmd_list = g_commands_list;
	while (cmd_list->name)
	{
		if (!strcmp(cmd, cmd_list->name))
			return (cmd_list->fn(argc - 1, argv + 1));
		cmd_list++;
	}
	return (-1);
}

int	main(int argc, char *argv[], char *env[])
{
	int	result_primary_cmd;

	if (argc < 2)
		return (1);
	result_primary_cmd = ft_primary_cmd(argc, argv);
	if (result_primary_cmd >= 0)
		return (result_primary_cmd);
	return (ft_secondary_cmd(argv, env));
}
