/*
** ETNA PROJECT, 09/10/2020 by nouar_a
** is_alpha_num
** File description:
**      is_alpha_num
*/


int     is_alpha_num(const char *str)
{
    if (*str >= 97 && *str <= 122)
        return 1;
    if (*str >= 65 && *str <= 90)
        return 1;
    if (*str >= 48 && *str <= 57)
        return 1;
    else
        return 0;
}
