/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** how_to_show
** File description:
**      the fonction "how_to_show", initialized variabal for show and return me linked_list_t
*/

#include "my.h"

linked_list_t *how_to_show(linked_list_t *t, char *str)
{
    linked_list_t *find;
    char **array;
    int sol = -1;
    array = my_str_to_word_array (str);
    int key = my_getnbr(array[0]);
    find = my_find_node(t , key);
    t = show(find, array, sol, key, t);
    write (1, "\n" , 1);
    return t;
}
