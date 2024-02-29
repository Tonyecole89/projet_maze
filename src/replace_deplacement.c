/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:08 +0100
 * 1st author:  tony.yam - tony.yam
 * description: replace_deplacement
 */

#include "regroupe.h"

int replace_deplacement(char *buffer, int s)
{
    if (buffer[s] != 'G' && buffer[s] != 'S') {
        buffer[s] = ' ';
    }
    return (0);
}
