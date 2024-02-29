/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:41 +0100
 * 1st author:  tony.yam - tony.yam
 * description: longueur_buff
 */

#include "regroupe.h"

int longueur_buff(char *buffer)
{
    int compt;
    int longu;

    compt = 0;
    longu = 0;
    while (buffer[compt] != '\0') {
        if (buffer[compt] == '\n') {
            longu = longu + 1;
        }
        compt = compt + 1;
    }
    return (longu);
}
