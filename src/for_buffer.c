/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-24 - 14:11 +0100
 * 1st author:  tony.yam - tony.yam
 * description: for_buffer
 */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "regroupe.h"

char *for_buffer(char **argv)
{
    int ouvrir;
    int lire;
    int taille_buff;
    char *buffer;
    char *buffer_temp;

    taille_buff = 0;
    lire = -1;
    ouvrir = open(argv[1], O_RDONLY);
    verif_open(ouvrir);
    buffer_temp = malloc(sizeof (char) * 20);
    verif_buff(buffer_temp);
    lec_fi_forbuff(&lire, &ouvrir, buffer_temp, &taille_buff);
    close(ouvrir);
    ouvrir = open(argv[1], O_RDONLY);
    verif_open(ouvrir);
    buffer = malloc(sizeof (char) * taille_buff + 1);
    verif_buff(buffer);
    buffer = for_buff_fin(ouvrir, buffer, taille_buff, lire);
    free(buffer_temp);
    return (buffer);
}
