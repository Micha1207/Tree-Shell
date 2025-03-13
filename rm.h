/*
 * rm.h
 * Remove files and dirs.
 * rm.h is part of Tree Shell
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 13.03.2025
*/
#include <stdio.h>

void rm(const char *thing){
  remove(thing);

}
