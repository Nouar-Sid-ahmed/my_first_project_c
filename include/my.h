/*
** ETNA PROJECT, 03/10/2020 by nouar_a
** my prototypes
** File description:
**      proto
*/

#ifndef MY_H_
#define MY_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct linked_list
{
    int key;
    int value;
    struct linked_list *next;
} linked_list_t;

linked_list_t *show(linked_list_t *find, char **array, int sol, int key, linked_list_t *t);
linked_list_t *how_to_show(linked_list_t *t, char *str);
linked_list_t *my_push_front_to_list(int key, int value, linked_list_t *list);
char    *my_readline(void);
int     is_alpha_num(const char *str);
int     cmp_mots(const char *str);
char   *my_strncpy(char *dest, const char *src, int n);
char   **my_str_to_word_array(const char *str);
int     my_getnbr(const char *str);
void    my_putnbr(int n);
void    my_putchar(char c);
int     my_strlen(const char *str);
linked_list_t *my_find_node(linked_list_t *list, const int key_ref);

#endif
