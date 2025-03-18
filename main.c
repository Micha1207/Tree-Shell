/*
 * main.c
 * Main function of Tree Shell Source code. Compile this.
 * main.c is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 15.03.2025
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <unistd.h>

// Include commands
#include "cmds/ls.h"
#include "cmds/cd.h"
#include "cmds/cat.h"
#include "cmds/echo.h"
#include "cmds/pwd.h"
#include "cmds/rm.h"
#include "cmds/mkdir.h"
#include "cmds/help.h"
#include "cmds/whoami.h"

int main() {
  char cmd[100];
  char *arg[10];
  
  printf("Welcome in Tree SHell!\n");
  printf("To see all available commands type: `help'.\n");
  
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
    }  else if (strcmp(arg[0], "rm") == 0) {
      if (arg[1]) { 
        rm(arg[1]);
      } else {
        printf("rm: Missing file argument\n");
      }
    } else if (strcmp(arg[0], "pwd") == 0){
	pwd();
    }  else if (strcmp(arg[0], "mkdir") == 0) {
      if (arg[1]) { 
        mkdirc(arg[1]);
      } else {
        printf("mkdir: Missing dir name.\n");
      }
    } else if (strcmp(arg[0], "whoami") == 0) {
      whoami();
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
      printf("%s: No such file or directory. \n", arg[0]);
    }
  }

  return 0;
}
