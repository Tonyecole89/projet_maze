/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:11 +0100
 * 1st author:  tony.yam - tony.yam
 * description: for_buff_fin
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "regroupe.h"

char *for_buff_fin(int ouvrir, char *buffer, int taille_buff, int lire)
{
    lire = read(ouvrir, buffer, taille_buff);
    if (lire == -1) {
        write(2, "can't read", 10);
    }
    buffer[lire] = '\0';
    close(ouvrir);
    return (buffer);
}
