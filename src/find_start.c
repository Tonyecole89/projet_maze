/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:09 +0100
 * 1st author:  tony.yam - tony.yam
 * description: find_start
 */

#include "regroupe.h"

int find_start(char *buffer)
{
    int compt;
    int i;

    compt = 0;
    i = 0;
    while (buffer[i] != 'S') {
        compt = compt + 1;
        i = i + 1;
    }
    return (compt);
}
