/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:05 +0100
 * 1st author:  tony.yam - tony.yam
 * description: buff_long_larg
 */

#include <stdlib.h>
#include "regroupe.h"

int buff_long_larg(char **argv)
{
    char *buffer;
    int longu;
    int larg;
    int compt;
    int back;

    back = 0;
    longu = 0;
    larg = 0;
    compt = 0;
    buffer = for_buffer(argv);
    while (buffer[compt] != '\0') {
        if (buffer[compt] == '\n') {
            longu = longu + 1;
        }
        compt = compt + 1;
    }
    compt = 0;
    while (buffer[compt] != '\n') {
        larg = larg + 1;
        compt = compt + 1;
    }
    back = write_long_larg(larg, longu, buffer);
    for_freebuff(buffer, back);
    return (back);
}
