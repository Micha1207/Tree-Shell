/*
 * echo.h
 * Print request
 * echo.h is the part of TSH.
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 12.03.2025
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void echo(const char *text){
  printf("%s\n", text);
}
