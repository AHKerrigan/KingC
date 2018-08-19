/* Write a function that, when given a stirng as it's argument, searches
 * the following array of structures for a matching command name
 * then calls the function associated with that name
 */

#include <stdio.h>
#include <string.h>
struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] =
{{"new"         new_cmd},
 {"open",       open_cmd},
 {"close",      close_cmd},
 {"close all",  close_all_cmd},
 {"save",       save_cmd},
 {"save as",    save_all_cmd},
 {"print",      print_cmd},
 {"exit",       exit_cmd}
 };

void executeFunction(char *command){
    for(int i = 0; i < 8; i++){
        if(strcmp(command, file_cmd[i].cmd.name) == 0){
            file_cmd[i].cmd_pointer();
            break;
        }
    }
}