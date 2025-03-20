/*
 * ls.h
 * Read files and dirs
 * ls.h is part of Tree Coreutils
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 12.03.2025
*/
void ls(){
  struct dirent *entry;
  DIR *dir = opendir(".");

  if (dir == NULL) {
    printf("%s%s: Cannot open local dir. This is critical.", red, dir);
    return;
  }
  
  while ((entry = readdir(dir)) != NULL) {
    if (entry->d_name[0] == '.') {
      continue;
    }
    printf("%s\n", entry->d_name);
  }

  closedir(dir);
}
