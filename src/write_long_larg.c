/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:05 +0100
 * 1st author:  tony.yam - tony.yam
 * description: write_long_larg
 */

#include <stdlib.h>
#include <unistd.h>
#include "regroupe.h"

int write_long_larg(int larg, int longu, char *buffer)
{
    int back;

    back = 0;
    back = verif_map(buffer);
    if (back == 0) {
        write(1, "width: ", 7);
        print_b10(larg);
        write(1, ", height: ", 10);
        print_b10(longu);
        write(1, "\n", 1);
        back = mouv(buffer, lb(buffer), longueur_buff(buffer));
    } else {
        free(buffer);
    }
    return (back);
}
