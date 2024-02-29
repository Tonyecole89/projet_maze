/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:06 +0100
 * 1st author:  tony.yam - tony.yam
 * description: condition_direc
 */

#include "regroupe.h"

int condition_direc(char *buffer, int s, int larg, int *direc)
{
    if (*direc == 1) {
        s = direc1(buffer, s, larg, direc);
    } else if (*direc == 2) {
        s = direc2(buffer, s, larg, direc);
    } else if (*direc == 3) {
        s = direc3(buffer, s, larg, direc);
    } else if (*direc == 4) {
        s = direc4(buffer, s, larg, direc);
    }
    return (s);
}
