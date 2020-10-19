/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_crd alternatif
** File description:
**      my_crd whit checking error in key
*/


#include "my2.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main() {
    linked_list_t *t = NULL;
    char *chaine ;
    char **array;
    int line = 0;
    chaine = my_readline();
    while (chaine) {
        line++;
        array = my_str_to_word_array (chaine);
        if (error_finder(array,line))
            t = how_to_show_delete(t, chaine);
        chaine = my_readline();
    }
    free(t);
    return 0;
}
