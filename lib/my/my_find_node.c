/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_find_node
** File description:
**      my_find_node 
*/

#include "my.h"

linked_list_t *my_find_node(linked_list_t *list, const int key_ref)
{
    while(list != 0) {
        if(list->key == key_ref)
            return (list);
        list = list->next;
    }
    return (0);
}
