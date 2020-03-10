/*
** EPITECH PROJECT, 2019
** intersection.c
** File description:
** intersection
*/

#include "intersection.h"

int get_nb_solutions(float a, float b, float c)
{
    float delta = pow(b, 2) - 4 * a * c;

    if (delta > 0)
        return (2);
    else if (delta == 0)
        return (1);
    else
        return (0);
}

void check_infinite(float *coefs)
{
    if (coefs[1] == 0 && coefs[2] == 0 && coefs[3] == 0) {
        printf("There is an infinite number of intersection points.\n");
        exit(0);
    }
}

void print_infos(int x, int y)
{
    if (x == 1)
        printf("Sphere of radius %d\n", y);
    if (x == 2)
        printf("Cylinder of radius %d\n", y);
    if (x == 3)
        printf("Cone with a %d degree angle\n", y);
    if (x < 1 || x > 3)
        exit(84);
}

int intersection(char **av)
{
    print_infos(atoi(av[1]), atoi(av[8]));
    printf(
        "Line passing through the point (%d, %d, %d) and paralle"
        "l to the vector (%d, %d, %d)\n",
        atoi(av[2]), atoi(av[3]), atoi(av[4]),
        atoi(av[5]), atoi(av[6]), atoi(av[7]));
    if (atoi(av[1]) == 1)
        go_sphere(av);
    else if (atoi(av[1]) == 2)
        go_cylinder(av);
    else
        go_cone(av);
    return (0);
}
