/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 3
 * created on:  2024-01-16 - 14:06 +0100
 * 1st author:  tony.yam - tony.yam
 * description: main
 */

#include <unistd.h>
#include "regroupe.h"

int main(int argc, char **argv)
{
    int back;

    back = 0;
    if (argc == 2) {
        back = maze(argv);
        if (back == 0) {
            return (0);
        } else {
            return (1);
        }
    } else {
        write(1, "il manque la map.\n", 18);
        return (1);
    }
    return (0);
}
