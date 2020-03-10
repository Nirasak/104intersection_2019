/*
** EPITECH PROJECT, 2019
** 104intersection.c
** File description:
** 104intersection
*/

#include "intersection.h"

int my_str_isnum(char const *str)
{
    int len = strlen(str);

    for (int i = 0; i != len; i += 1)
        if ((str[i] < 48 || str[i] > 57) && str[i] != '-')
            return (0);
    return (1);
}

int error_handling(int ac, char **av)
{
    if (ac != 9)
        return (ERROR);
    if ((atoi(av[1]) != 1 && atoi(av[1]) != 2 && atoi(av[1]) != 3)
        || atoi(av[8]) < 0 || (atoi(av[1]) == 3 && atoi(av[8]) >= 360) ||
        (atoi(av[5]) == 0 && atoi(av[6]) == 0 && atoi(av[7]) == 0))
        return (ERROR);
    for (int i = 2; i < 8; i++)
        if (my_str_isnum(av[i]) == 0)
            return (ERROR);
    return (0);
}

int main(int ac, char **av)
{
    if (error_handling(ac, av) == ERROR)
        return (ERROR);
    return (intersection(av));
}
