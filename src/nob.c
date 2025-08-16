#define NOB_IMPLEMENTATION
#include "../include/nob.h"

#define SRC_FOLDER   "src/"

int main(int argc, char **argv)
{
    NOB_GO_REBUILD_URSELF(argc, argv);

    Nob_Cmd cmd = {0};
    
    nob_cmd_append(
        &cmd,
        "g++",
        "-Wall",
        "-Wextra",
        "-o",
        SRC_FOLDER"calc",
        SRC_FOLDER"IntegerNode.cpp",
        SRC_FOLDER"IntegerLinkedList.cpp",
        SRC_FOLDER"main.cpp"
    );
    if (!nob_cmd_run(&cmd)) return 1;

    nob_cmd_append(&cmd, SRC_FOLDER"calc");
    if (!nob_cmd_run(&cmd)) return 1;
    
    return 0;
}
