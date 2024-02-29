/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:08 +0100
 * 1st author:  tony.yam - tony.yam
 * description: start_direc
 */

#include "regroupe.h"

int start_direc(int start, int longu, char *buffer)
{
    int direction;
    int longueur;

    longueur = 0;
    while (buffer[longueur] != '\0') {
        longueur = longueur + 1;
    }
    if (start <= longu) {
        direction = 1;
    } else if (start >= longueur - 21) {
        direction = 2;
    } else if (start % longu < longu / 2) {
        direction = 3;
    } else {
        direction = 4;
    }
    return (direction);
}
