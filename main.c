#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <unistd.h>

// Include commands
#include "ls.h"
#include "cd.h"
#include "cat.h"
#include "echo.h"
#include "pwd.h"

void help(){
  printf("TSH usage: \n");
  printf("  ls   - LiSt files in current directory. \n");
  printf("  cd   - Change Directioy. \n");
  printf("  cat  - Read and display file content (conCATinate). \n");
  printf("  pwd  - Print Working Directory. \n");
  printf("  echo - Echo what is after the command (e.g. echo Hello => Hello. Supports only one word now [it'll change]) \n");
  printf("  help - print this. \n");
  printf("  exit - exit TSH. \n");

}

int main() {
  char cmd[100];
  char *arg[10];
  
  printf("Welcome in Tree SHell!\n");
  
  while (1) {
    printf("$ ");
    fgets(cmd, sizeof(cmd), stdin);

    cmd[strcspn(cmd, "\n")] = 0;
    
    int i = 0;
    char *token = strtok(cmd, " ");
    while (token != NULL) {
      arg[i++] = token;
      token = strtok(NULL, " ");
    }
    arg[i] = NULL;

    if (strcmp(arg[0], "ls") == 0) {
      ls();
    } else if (strcmp(arg[0], "cd") == 0) {
      if (arg[1]) { 
        cd(arg[1]);
	pwd();
      } else {
        printf("cd: Missing argument\n");
      }
    } else if (strcmp(arg[0], "cat") == 0) {
      if (arg[1]) { 
        cat(arg[1]);
      } else {
        printf("cat: Missing file argument\n");
      }
    } else if (strcmp(arg[0], "pwd") == 0){
	pwd();
    } else if (strcmp(arg[0], "echo") == 0) {
      if (arg[1]) { 
        echo(arg[1]);
      } else {
        printf("echo: Missing text argument\n");
      }
    } else if (strcmp(arg[0], "help") == 0) {
      help();
    } else if (strcmp(arg[0], "exit") == 0) {
      break; 
    } else {
      printf("No such command as: %s\n", arg[0]);
    }
  }

  return 0;
}
