/*
** ETNA PROJECT, 10/10/2020 by nouar_a
** my_delete_nodes
** File description:
**      fonction delete nodel and join chaine
*/

#include "my2.h"
void my_delete_nodes(linked_list_t *list, const int key_ref)
{
    linked_list_t *cur = list;

    if (cur->key == key_ref) {
        linked_list_t *elemtorm = cur;
        cur = cur->next;
        free(elemtorm);
        list = cur;
    }
    while (cur != NULL) {
        if (cur->key == key_ref) {
            linked_list_t *tmp = cur->next;
            cur->next=cur->next->next;
            tmp->next = 0;
            free(tmp);
        }
        cur = cur->next;
    }
}
