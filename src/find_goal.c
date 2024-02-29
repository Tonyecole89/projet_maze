/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:09 +0100
 * 1st author:  tony.yam - tony.yam
 * description: find_goal
 */

#include "regroupe.h"

int find_goal(char *buffer)
{
    int compt;
    int i;

    compt = 0;
    i = 0;
    while (buffer[i] != 'G') {
        compt = compt + 1;
        i = i + 1;
    }
    compt = compt + 1;
    return (compt);
}
