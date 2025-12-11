#include "libcmd.h"

struct cmd      commands_list[] = {
    {"-h", cmd_help},
    {"--help", cmd_help},
    {"update", cmd_update},
    {"bbl", cmd_bbl},
    {NULL, NULL}
};
