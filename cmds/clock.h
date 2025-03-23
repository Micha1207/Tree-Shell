/*
 * main.c
 * Main function of Tree Shell Source code. Compile this.
 * main.c is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 20.03.2025
*/
#include <stdio.h>
#include <time.h>

void clockc(char flag[10]){
  time_t now;
  struct tm *timeinfo;

  if (strcmp(flag, "--unix") == 0) {
    time(&now);
    printf("%ld\n", (long)now);
  } else if (strcmp(flag, "--std") == 0){
    time(&now);
    timeinfo = localtime(&now);
    printf("%s", asctime(timeinfo));
  }
}
