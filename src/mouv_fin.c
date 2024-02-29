/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-26 - 08:56 +0100
 * 1st author:  tony.yam - tony.yam
 * description: mouv_fin
 */

#include <unistd.h>
#include <stdlib.h>
#include "regroupe.h"

int mouv_fin(char *buffer, int s)
{
    write(1, buffer, longueur_char(buffer));
    propagation(buffer, s);
    return (0);
}
