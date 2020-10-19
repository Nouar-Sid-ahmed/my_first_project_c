/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** cmp_mots
** File description:
**      the fonction "cmp_mots", count alpha numericts worls in a string
*/

#include "my.h"

int     cmp_mots(const char *str)
{
    int c = 0;
    while (*str != '\0') {
        if (is_alpha_num(str) == 1){
            c++;
            while (is_alpha_num(str) == 1) {
                str++;
            }
        }
        else
            str++;
    }
    return c;
}
