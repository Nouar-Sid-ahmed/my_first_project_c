/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** how_to_show.c
** File description:
**      how_to_show
*/


#include "my2.h"
#include "my.h"
#include <stdlib.h>
#include <unistd.h>

int error_finder(char **array, int line)
{
    int i = 0;
    if (!array[0]) {
        my_putstr("fichier vide \n");
        return 0;
    }
    while (array[0][i] != '\0') {
        if (my_getnbr(array[0]) == 0) {
            my_putstr("Ligne ");
            my_putnbr(line);
            my_putstr(" vous avez noté un charactére non numérique, en tant que clef.\n");
            return 0;
        }
        i++;
    }
    return 1;
}
