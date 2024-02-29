/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 17:13 +0100
 * 1st author:  tony.yam - tony.yam
 * description: write_propa
 */

#include <unistd.h>
#include "regroupe.h"

int write_propa(char *b)
{
    write(1, "\n", 1);
    write(1, "distances to start:\n", 20);
    write(1, b, longueur_char(b));
    return (0);
}
