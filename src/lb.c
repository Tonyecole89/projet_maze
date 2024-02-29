/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:31 +0100
 * 1st author:  tony.yam - tony.yam
 * description: lb
 */

#include "regroupe.h"

int lb(char *buffer)
{
    int compt;

    compt = 0;
    while (buffer[compt] != '\n') {
        compt = compt + 1;
    }
    compt = compt + 1;
    return (compt);
}
