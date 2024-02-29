/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-25 - 16:53 +0100
 * 1st author:  tony.yam - tony.yam
 * description: propager
 */

#include "regroupe.h"

int propager(int *array, char *b)
{
    int ct_arr;
    int j;
    int i;
    int cmpt_tempo;

    ct_arr = 1;
    i = 0;
    j = 2;
    cmpt_tempo = 1;
    while (ct_arr != 0) {
        array = condition_orientation(b, array, &j, &ct_arr);
        while (cmpt_tempo != 0) {
            i = 0;
            while (i != ct_arr) {
                array[i] = array[i + 1];
                i = i + 1;
            }
            ct_arr = ct_arr - 1;
            cmpt_tempo = cmpt_tempo - 1;
        }
        cmpt_tempo = ct_arr;
        j = j + 1;
    }
    write_propa(b);
    return (0);
}
