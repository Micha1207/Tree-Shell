/*
 * whoami.h
 * Print user name.
 * whoami.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * 20.03.2025
*/
void whoami(){
  char* usrname;
  usrname = getlogin();
  if (usrname != NULL){
    printf("%s\n", usrname);
  } else {
    printf("E: Cannot get user name.\n");
  }
} 
