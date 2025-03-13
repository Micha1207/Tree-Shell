/*
 * cd.h
 * Change directory
 * cd.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 12.03.2025
*/
#include <stdio.h>
#include <unistd.h>

void cd(const char *path){
  if (chdir(path) != 0) {
    perror("chdir");
  }
}
