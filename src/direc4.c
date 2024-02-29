/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:07 +0100
 * 1st author:  tony.yam - tony.yam
 * description: direc4
 */

#include "regroupe.h"

int direc4(char *buffer, int s, int larg, int *direc)
{
    if (buffer[s + larg] == '#' && buffer[s - 1] != '#') {
        s = s - 1;
        replace_deplacement(buffer, s);
    } else if (buffer[s - 1] == '#' && buffer[s + larg] == '#') {
        *direc = 2;
    } else if (buffer[s + larg] != '#') {
        *direc = 1;
        s = s + larg;
        replace_deplacement(buffer, s);
    }
    return (s);
}
