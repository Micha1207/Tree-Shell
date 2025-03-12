/*
 * cat.h
 * Get file content
 * cat.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * 12.03.2025
 */
#include <stdio.h>

void cat(const char *filename){
  FILE *file = fopen(filename, "r");
  
  if (file == NULL) {
    perror("cat");
    return;
  }

  char line[100];
  while (fgets(line, sizeof(line), file)) {
    printf("%s", line);
  }
  
  fclose(file);
}
