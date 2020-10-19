/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** show
** File description:
**     the fonction "show", show the good think in terminal 
*/

#include "my.h"

linked_list_t *show(linked_list_t *find, char **array, int sol, int key, linked_list_t *t)
{
    if (!array[1]) {
        if (find)
            sol = find->value;
        else
            sol = -1;
    } else if (array[1][0] == 'D' && array[1][1] == '\0') {
        if (find) {
            sol = find->value;
            find->value = -1;
        }else
            sol = -1;
    } else {
        sol = key;
        if (find)
            find->value = my_getnbr(array[1]);
        else{
            t = my_push_front_to_list(key, my_getnbr(array[1]), t);
        }
    }
    my_putnbr(sol);
    return (t);
}
