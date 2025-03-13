/*
 * echo.h
 * Print request infinitely
 * echo.h is the part of TSH.
 *
 * Written by Michael Ł. (Micha1207) in GNU Emacs.
 * 13.03.2025
 */
#include <stdio.h>
#include <string.h>

void echo() {
    char buffer[1024];

    while (1) {
        if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
            printf("%s", buffer);
        }
    }
}
