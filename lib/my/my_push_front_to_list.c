/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_push_front_to_list.
** File description:
**      my_push_front_to_list.
*/

#include <stdlib.h>
#include "my.h"

linked_list_t *my_push_front_to_list(int key, int value, linked_list_t *list)
{
    linked_list_t *elem;

    elem = malloc(sizeof(linked_list_t));
    elem->key = key;
    elem->value = value;
    elem->next = list;

    return (elem);
}
