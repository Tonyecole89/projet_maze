/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:12 +0100
 * 1st author:  tony.yam - tony.yam
 * description: longueur_char
 */

#include "regroupe.h"

int longueur_char(const char *str)
{
    int counter;

    counter = 0;
    while (str[counter] != '\0') {
        counter = counter + 1;
    }
    return (counter);
}
