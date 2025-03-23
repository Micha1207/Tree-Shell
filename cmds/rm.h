/*
 * rm.h
 * Remove files and dirs.
 * rm.h is part of Tree Shell
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 21.03.2025
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void rm(const char *thing){
  if (remove(thing) != 0){
    printf("%s%s: No such file or directory. %s\n", red, thing, reset);
  }
}
