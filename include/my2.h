/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** [...]
** File description:
**      my2.h
*/

#ifndef MY2_H
#define MY2_H

#include "my.h"

void my_delete_nodes(linked_list_t *list, const int key_ref);
void my_putstr(const char *str);
int error_finder(char **array, int line);
int is_nbr(char str);
linked_list_t *show_delete( linked_list_t *find, char **array, int sol, int key, linked_list_t *t);
linked_list_t *how_to_show_delete(linked_list_t *t, char *str);

#endif
