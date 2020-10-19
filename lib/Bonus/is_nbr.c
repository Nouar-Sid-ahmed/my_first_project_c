/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** is nbr
** File description:
**       check if it's number
*/

#include "my2.h"
#include "my.h"

int is_nbr(char str)
{
    if (str >= '0' && str <= '9')
        return 1;
    else
        return 0;
}
