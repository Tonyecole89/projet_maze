/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:06 +0100
 * 1st author:  tony.yam - tony.yam
 * description: mouv
 */

#include <stdlib.h>
#include <unistd.h>
#include "regroupe.h"

int mouv(char *buffer, int larg, int longu)
{
    int direc;
    int s;
    int block;
    int pos;

    block = 0;
    pos = 0;
    s = find_start(buffer);
    direc = start_direc(s, longu, buffer);
    pos = condition_direc(buffer, s, larg, &direc);
    while (buffer[pos] != 'G' && block != 1) {
        if (pos != s) {
            pos = condition_direc(buffer, pos, larg, &direc);
        } else {
            block = 1;
        }
    }
    if (block == 1) {
        write(1, "No Solution to maze.\n", 21);
        free(buffer);
        return (1);
    } else {
        mouv_fin(buffer, s);
    }
    return (0);
}
