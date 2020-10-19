/*
** ETNA PROJECT, 29/09/2020 by nouar_a
** my_strlen.c
** File description:
**      return len
*/

int     my_strlen(const char *str)
{
    int c = 0;
    while (*str != '\0') {
        c++;
        str++;
    }
    return c;
}
