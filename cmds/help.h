/*
 * help.h
 * Print help.
 * help.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 18.03.2025
*/
#include <stdio.h>

void help(){
  printf("TSH usage: \n");
  printf("  ls ------------------ LiSt files in current directory. \n");
  printf("  cd <dir> ------------ Change Directioy. \n");
  printf("  rm <file/dir> ------- ReMoves files or directories. \n");
  printf("  cat <file> ---------- Read and display file content (conCATinate). \n");
  printf("  pwd  ---------------- Print Working Directory. \n");
  printf("  echo <what?> -------- Echo what is after the command (e.g. echo Hello => Hello. Supports only one word) \n");
  printf("  whoami --------- print username.\n");
  printf("  mkdir ---------- make directory. \n");
  printf("  help ----------- print this. \n");
  printf("  exit ----------- exit TSH. \n");
}
