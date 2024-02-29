/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:55 +0100
 * 1st author:  tony.yam - tony.yam
 * description: bas
 */

#include "regroupe.h"

int *bas(int *array, int *ct_arr, int larg, int *ctar)
{
    array[*ct_arr] = array[*ctar] + larg;
    *ct_arr = *ct_arr + 1;
    return (array);
}
