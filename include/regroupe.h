/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-16 - 15:01 +0100
 * 1st author:  tony.yam - tony.yam
 * description: regroupe
 */

#ifndef REGROUPE_H_
#define REGROUPE_H_

int main(int argc, char **argv);
int maze(char **argv);
int buff_long_larg(char **argv);
int write_long_larg(int larg, int longu, char *buffer);
int mouv(char *buffer, int larg, int longu);
int condition_direc(char *buffer, int s, int larg, int *direc);
int direc4(char *buffer, int s, int larg, int *direc);
int direc3(char *buffer, int s, int larg, int *direc);
int direc2(char *buffer, int s, int larg, int *direc);
int direc1(char *buffer, int s, int larg, int *direc);
int replace_deplacement(char *buffer, int s);
int start_direc(int start, int longu, char *buffer);
int longueur_buff(char *buffer);
int lb(char *buffer);
int find_goal(char *buffer);
int find_start(char *buffer);
int print_b10(int nb);
int get_digit(int nb, int index);
int nb_len(int nb);
void tc_putchar(char c);
char *for_buffer(char **argv);
char *for_buff_fin(int ouvrir, char *buffer, int taille_buff, int lire);
int verif_buff(char *buffer_t);
int longueur_char(const char *str);
int taille_chemin(char *buffer);
int verif_direc(int direc, int s, int larg);
int propager(int *array, char *b);
int propagation(char *buffer, int s);
int *condition_orientation(char *b, int *array, int *j, int *ct_arr);
int *bas(int *array, int *ct_arr, int larg, int *ctar);
int *haut(int *array, int *ct_arr, int larg, int *ctar);
int *gauche(int *array, int *ct_arr, int *ctar);
int *droit(int *array, int *ct_arr, int *ctar);
int write_propa(char *b);
int mouv_fin(char *buffer, int s);
int verif_open(int ouvrir);
int lec_fi_forbuff(int *lire, int *ouvrir, char *buffer_temp, int *taille_buff);
int for_freebuff(char *buffer, int back);
int verif_map(char *buffer);

#endif
