/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-26 - 09:22 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lec_fi_forbuff
 */

#include <unistd.h>
#include "regroupe.h"

int lec_fi_forbuff(int *lire, int *ouvrir, char *buffer_temp, int *taille_buff)
{
    while (*lire != 0) {
        *lire = read(*ouvrir, buffer_temp, 20);
        if (*lire == -1) {
            write(2, "can't read", 10);
        }
        *taille_buff = *taille_buff + *lire;
    }
    return (0);
}
