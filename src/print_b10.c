/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:10 +0100
 * 1st author:  tony.yam - tony.yam
 * description: print_b10
 */

#include "regroupe.h"

int print_b10(int nb)
{
    int longueur;

    longueur = nb_len(nb);
    while (longueur > 0) {
        tc_putchar('0' + get_digit(nb, longueur - 1));
        longueur = longueur - 1;
    }
    return (0);
}
