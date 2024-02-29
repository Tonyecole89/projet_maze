/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-26 - 10:00 +0100
 * 1st author:  tony.yam - tony.yam
 * description: for_freebuff
 */

#include <stdlib.h>
#include "regroupe.h"

int for_freebuff(char *buffer, int back)
{
    if (back == 0) {
        free(buffer);
    }
    return (0);
}
