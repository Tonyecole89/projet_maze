/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:54 +0100
 * 1st author:  tony.yam - tony.yam
 * description: droit
 */

#include "regroupe.h"

int *droit(int *array, int *ct_arr, int *ctar)
{
    array[*ct_arr] = array[*ctar] - 1;
    *ct_arr = *ct_arr + 1;
    return (array);
}
