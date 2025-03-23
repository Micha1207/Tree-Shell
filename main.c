/*
 * main.c
 * Main function of Tree Shell Source code. Compile this.
 * main.c is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 22.03.2025
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <libgen.h>
#include <unistd.h>

// Include colors
#include "cmds/text-colors.h" // This IS NOT A COMMAND

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
#include "cmds/grep.h"
#include "cmds/cls.h"
#include "cmds/new.h"
#include "cmds/clock.h"

// Main functon
int main() { 
  char cmd[100]; // Buffer for command
  char *arg[10]; // Buffer for shell input ( arg[0] is command, arg[1] it's 1st argument, etc. )
  
  // Welcome user
  printf("Welcome in Tree SHell!\n");
  printf("To see all available commands type: `help'.\n");
  
  while (1) { // Make shell going for ever
    printf("%s$ %s", cyan, reset); // Print shell's '$ ' in cyan color ( defined in 'text-colors.h' )
    fgets(cmd, sizeof(cmd), stdin); // Get user input ( the command )

    cmd[strcspn(cmd, "\n")] = 0; // Remove newline character
    
    int i = 0; 
    char *token = strtok(cmd, " ");
    while (token != NULL) {
      arg[i++] = token;
      token = strtok(NULL, " ");
    }
    arg[i] = NULL;


    // Execute commands ( comands' functions are in 'cmds/' directory
    if (strcmp(arg[0], "ls") == 0) {
      ls();
    } else if (strcmp(arg[0], "cls") == 0) {
      cls();
    } else if (strcmp(arg[0], "clock") == 0) {
      if (arg[1]) {
	clockc(arg[1]);
      }
    } else if (strcmp(arg[0], "pwd") == 0) {
      pwd();
    } else if (strcmp(arg[0], "new") == 0) {
      if (arg[1]) {
	new(arg[1]);
      }
    } else if (strcmp(arg[0], "cd") == 0) {
      if (arg[1]) {
	cd(arg[1]);
	pwd();
      }
    } else if (strcmp(arg[0], "cat") == 0) {
      if (arg[1]) {
	cat(arg[1]);
      }
    } else if (strcmp(arg[0], "rm") == 0) {
      if (arg[1]) {
	rm(arg[1]);
      }
    } else if (strcmp(arg[0], "mkdir") == 0) {
      if (arg[1]) {
	mkdirc(arg[1]);
      }
    } else if (strcmp(arg[0], "whoami") == 0) {
      whoami();
    } else if (strcmp(arg[0], "echo") == 0) {
      if (arg[1]) {
	echo(arg[1]);
      }
    } else if (strcmp(arg[0], "grep") == 0) {
      if (arg[1]) {
	if (arg[2]) {
	  grep(arg[1], arg[2]);
	}
      }
    } else if (strcmp(arg[0], "help") == 0) {
      help();
    } else if (strcmp(arg[0], "exit") == 0) {
      break;
    } else {
      printf("%s%s: No such file or directory.%s\n", red, arg[0], reset); // If command is not defined
    }
    // If you can read these else-if's without breaking your eyes, you're a genius.  
  }
  return 0; // End of code.
}
