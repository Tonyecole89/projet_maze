/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-26 - 10:22 +0100
 * 1st author:  tony.yam - tony.yam
 * description: verif_map
 */

#include <unistd.h>
#include "regroupe.h"

int verif_map(char *buffer)
{
    int compteur;
    int compt;
    int compt_tempo;

    compteur = 0;
    compt = 0;
    compt_tempo = 0;
    while (buffer[compt_tempo] != '\n') {
        compt_tempo = compt_tempo + 1;
    }
    while (buffer[compt] != '\0') {
        if (buffer[compt] != '\n') {
            compteur = compteur + 1;
        } else {
            if (compteur == compt_tempo) {
                compteur = 0;
            } else {
                write(1, "la map n'est pas valide\n", 24);
                return (1);
            }
        }
        compt = compt + 1;
    }
    return (0);
}
