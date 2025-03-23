/*
 * new.h
 * Make new, empty file.
 * new.h is the part of TSH
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs
 * Last edit on 21.03.2025
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void new(const char *filename) {
    int fd;
    
    fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR); 

    close(fd);
}
