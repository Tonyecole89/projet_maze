/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:55 +0100
 * 1st author:  tony.yam - tony.yam
 * description: verif_direc
 */

#include "regroupe.h"

int verif_direc(int direc, int s, int larg)
{
    if (direc == 1) {
        s = s + larg;
    } else if (direc == 2) {
        s = s - larg;
    } else if (direc == 3) {
        s = s + 1;
    } else if (direc == 4) {
        s = s - 1;
    }
    return (s);
}
