/*
 * mkdir.h
 * Make Directories.
 * mkdir is the part of TSH.
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
*/
void mkdirc(const char *dirname){
  chdir("."); // Make sure to make dir in local dir named (in GNU/Linux at least) '.'.

  mkdir(dirname, 0777); // Make dir.
}
