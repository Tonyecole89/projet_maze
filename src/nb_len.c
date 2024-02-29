/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:10 +0100
 * 1st author:  tony.yam - tony.yam
 * description: nb_len
 */

#include "regroupe.h"

int nb_len(int nb)
{
    int compteur;

    compteur = 0;
    while (nb >= 1) {
        nb = nb / 10;
        compteur = compteur + 1;
    }
    return (compteur);
}
