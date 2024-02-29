/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:07 +0100
 * 1st author:  tony.yam - tony.yam
 * description: direc2
 */

#include "regroupe.h"

int direc2(char *buffer, int s, int larg, int *direc)
{
    if (buffer[s - 1] == '#' && buffer[s - larg] != '#') {
        s = s - larg;
        replace_deplacement(buffer, s);
    } else if (buffer[s - 1] == '#' && buffer[s - larg] == '#') {
        *direc = 3;
    } else if (buffer[s - 1] != '#') {
        *direc = 4;
        s = s - 1;
        replace_deplacement(buffer, s);
    }
    return (s);
}
