/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:08 +0100
 * 1st author:  tony.yam - tony.yam
 * description: direc1
 */

#include "regroupe.h"

int direc1(char *buffer, int s, int larg, int *direc)
{
    if (buffer[s + 1] == '#' && buffer[s + larg] != '#') {
        s = s + larg;
        replace_deplacement(buffer, s);
    } else if (buffer[s + 1] == '#' && buffer[s + larg] == '#') {
        *direc = 4;
    } else if (buffer[s + 1] != '#') {
        *direc = 3;
        s = s + 1;
        replace_deplacement(buffer, s);
    }
    return (s);
}
