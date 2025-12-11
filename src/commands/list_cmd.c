#include "libcmd.h"

struct cmd      commands_list[] = {
    {"-h", cmd_help},
    {"--help", cmd_help},
    {"bbl", cmd_bbl},
    {NULL, NULL}
};
