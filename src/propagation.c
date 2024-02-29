/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 15:16 +0100
 * 1st author:  tony.yam - tony.yam
 * description: propagation
 */

#include <stdlib.h>
#include "regroupe.h"

int propagation(char *buffer, int s)
{
    int *array;
    int direc;
    int larg;

    larg = lb(buffer);
    array = malloc(sizeof (int) * taille_chemin(buffer));
    if (!buffer) {
        return (0);
    }
    direc = start_direc(s, longueur_buff(buffer), buffer);
    s = verif_direc(direc, s, larg);
    buffer[s] = '1';
    array[0] = s;
    propager(array, buffer);
    free(array);
    return (0);
}
