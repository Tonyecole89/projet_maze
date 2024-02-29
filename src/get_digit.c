/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:10 +0100
 * 1st author:  tony.yam - tony.yam
 * description: get_digit
 */

#include "regroupe.h"

int get_digit(int nb, int index)
{
    int resultat;

    resultat = 0;
    while (index > 0) {
        nb = nb / 10;
        index = index - 1;
    }
    resultat = nb % 10;
    return (resultat);
}
