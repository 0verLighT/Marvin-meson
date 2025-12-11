#include "libcmd.h"

int cmd_update(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    char *home = getenv("HOME");
    if (!home)
        return (1);

    size_t len = strlen("make -C ") + strlen(home) + strlen("/.marvin update") + 1;
    char *command = malloc(len);
    if (!command) {
        return 1; // Échec de l'allocation
    }

    strcpy(command, "make -C ");
    strcat(command, home);
    strcat(command, "/.marvin update");

    system(command);
    free(command);

    return (0);
}
