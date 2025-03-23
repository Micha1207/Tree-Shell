/*
 * ls.h
 * Read files and dirs
 * ls.h is part of Tree Coreutils
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 21.03.2025
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <dirent.h>

void ls(){
  struct dirent *entry;
  DIR *dir = opendir(".");

  if (dir == NULL) {
    printf("%s%s: Cannot open local dir. This is critical. Aliens will. You will be abducted by aliens.", red, dir);
    return;
  }
  
  while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] == '.') {
            continue;
        }
        if (entry->d_type == DT_DIR) {
	  printf("%s%s/%s\n", blue, entry->d_name, reset);
        } else if (entry->d_type == DT_REG) {
          printf("%s%s %s\n", green, entry->d_name, reset);
        } else {
	  printf("%s%s %s\n", yellow, entry->d_name, reset);
        }
    }

  closedir(dir);
}
