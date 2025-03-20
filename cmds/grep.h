/*
 * main.c
 * Main function of Tree Shell Source code. Compile this.
 * main.c is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 15.03.2025
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void grep(const char *pattern, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
      printf("%s%s: No such file or directory. %s\n", red, filename, reset);
      return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, pattern)) {
          printf("%s", line);
        }
    }

    fclose(file);
}
