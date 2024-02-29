/*
 * E89 Pedagogical & Technical Lab
 * project:     Projet 1
 * created on:  2024-01-26 - 14:22 +0100
 * 1st author:  tony.yam - tony.yam
 * description: coords_to_idx
 */

int coords_to_idx(int x, int y, int width)
{
    int total;

    total = (x + (y * (width + 1)));
    return (total);
}
