/*
 * cls.h
 * Clear terinal screen
 * cls.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 20.03.2025
*/
void cls(){
  printf("\033[H\033[J");
}
