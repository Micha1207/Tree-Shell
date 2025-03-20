/*
 * cd.h
 * Change directory
 * cd.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 20.03.2025
*/
void cd(const char *path){
  if (chdir(path) != 0) {
    printf("%s%s: No such file or directory.%s\n", red, path, reset);
  }
}
