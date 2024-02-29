/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:10 +0100
 * 1st author:  tony.yam - tony.yam
 * description: tc_putchar
 */

#include <unistd.h>
#include "regroupe.h"

void tc_putchar(char c)
{
    write(1, &c, 1);
}
