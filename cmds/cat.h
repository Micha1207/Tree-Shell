/*
 * cat.h
 * Get file content
 * cat.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * 20.03.2025
*/
void cat(const char *filename) {
    FILE *file = fopen(filename, "r");
    
    if (!file) {
      printf("%s%s: No such file or directory.%s\n", red, filename, reset);
      return;
    }
    
    char buffer[100];
    while (fgets(buffer, sizeof(buffer), file)) {
      printf("%s", buffer);
    }

    fclose(file);
}
