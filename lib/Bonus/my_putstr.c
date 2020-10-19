/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** my_putstr
** File description:
**      my_putstr
*/

#include "my2.h"
#include "my.h"

void my_putstr(const char *str)
{
    while (*str != '\0') {
        my_putchar( *str );
        str++;
    }
}
