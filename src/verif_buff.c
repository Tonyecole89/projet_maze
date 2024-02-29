/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:11 +0100
 * 1st author:  tony.yam - tony.yam
 * description: verif_buff
 */

#include <unistd.h>
#include <stdlib.h>
#include "regroupe.h"

int verif_buff(char *buffer_t)
{
    if (!buffer_t) {
        write(2, "error buffer", 13);
    }
    return (0);
}
