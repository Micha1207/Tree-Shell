/*
 * help.h
 * Print help.
 * help.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 18.03.2025
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void help(){
  printf("%sTSH usage: \n", yellow);
  printf("  ls ------------------ LiSt files in current directory. \n");
  printf("  cd <dir> ------------ Change Directioy. \n");
  printf("  rm <file/dir> ------- ReMoves files or directories. \n");
  printf("  cat <file> ---------- Read and display file content (conCATinate). \n");
  printf("  pwd  ---------------- Print Working Directory. \n");
  printf("  echo <what?> -------- Echo what is after the command (e.g. echo Hello => Hello. Supports only one word) \n");
  printf("  whoami -------------- print username.\n");
  printf("  mkdir --------------- make directory. \n");
  printf("  help ---------------- print this. \n");
  printf("  exit ---------------- exit TSH. %s\n", reset);
}
