/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:54 +0100
 * 1st author:  tony.yam - tony.yam
 * description: condition_orientation
 */

#include "regroupe.h"

int *condition_orientation(char *b, int *array, int *j, int *ct_arr)
{
    int ctar;
    int cmpt_tempo;

    ctar = 0;
    cmpt_tempo = *ct_arr;
    while (ctar <= cmpt_tempo - 1) {
        if (b[array[ctar] + lb(b)] == '.' || b[array[ctar] + lb(b)] == ' ') {
            b[array[ctar] + lb(b)] = (*j % 10) + 48;
            array = bas(array, ct_arr, lb(b), &ctar);
        }
        if (b[array[ctar] - lb(b)] == '.' || b[array[ctar] - lb(b)] == ' ') {
            b[array[ctar] - lb(b)] = (*j % 10) + 48;
            array = haut(array, ct_arr, lb(b), &ctar);
        }
        if (b[array[ctar] + 1] == '.' || b[array[ctar] + 1] == ' ') {
            b[array[ctar] + 1] = (*j % 10) + 48;
            array = gauche(array, ct_arr, &ctar);
        }
        if (b[array[ctar] - 1] == '.' || b[array[ctar] - 1] == ' ') {
            b[array[ctar] - 1] = (*j % 10) + 48;
            array = droit(array, ct_arr, &ctar);
        }
        ctar = ctar + 1;
    }
    return (array);
}
