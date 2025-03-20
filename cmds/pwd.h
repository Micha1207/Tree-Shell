/*
 * pwd.h
 * Print Working Directory
 * This is a part of TSH.
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 20.03.2025
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void pwd(){
  char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
    printf("%s\n", cwd);
  } else {
    perror("getcwd");
  }

}
