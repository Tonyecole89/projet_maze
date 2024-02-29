/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:55 +0100
 * 1st author:  tony.yam - tony.yam
 * description: taille_chemin
 */

#include "regroupe.h"

int taille_chemin(char *buffer)
{
    int compt;
    int i;

    compt = 0;
    i = 0;
    while (buffer[i] != '\0') {
        if (buffer[i] == '.' || buffer[i] == ' ') {
            compt = compt + 1;
        }
        i = i + 1;
    }
    return (compt);
}
