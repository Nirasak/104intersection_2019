/*
** EPITECH PROJECT, 2019
** objects_functions.c
** File description:
** objet function
*/

#include "intersection.h"

void go_sphere(char **av)
{
    int p[3] = {atoi(av[2]), atoi(av[3]), atoi(av[4])};
    int v[3] = {atoi(av[5]), atoi(av[6]), atoi(av[7])};
    float *coefs = get_coefs_sphere(p, v, atoi(av[8]));
    int nb_sols = get_nb_solutions(coefs[0], coefs[1], coefs[2]);
    float *solution = solve_square_equation(coefs[0], coefs[1], coefs[2]);
    float *final_cos;

    if (nb_sols == 0)
        printf("No intersection point.\n");
    else if (nb_sols == 1) {
        final_cos = get_coordinates(p, v, solution[0]);
        printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
    } else {
        final_cos = get_coordinates(p, v, solution[0]);
        printf("2 intersection points:\n(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
        final_cos = get_coordinates(p, v, solution[1]);
        printf("(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
    }
}

void go_cylinder(char **av)
{
    int p[3] = {atoi(av[2]), atoi(av[3]), atoi(av[4])};
    int v[3] = {atoi(av[5]), atoi(av[6]), atoi(av[7])};
    float *coefs = get_coefs_cylinder(p, v, atoi(av[8]));
    int nb_sols = get_nb_solutions(coefs[0], coefs[1], coefs[2]);
    float *solution = solve_square_equation(coefs[0], coefs[1], coefs[2]);
    float *final_cos;

    check_infinite(coefs);
    if (nb_sols == 0)
        printf("No intersection point.\n");
    else if (nb_sols == 1) {
        final_cos = get_coordinates(p, v, solution[0]);
        printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
    } else {
        final_cos = get_coordinates(p, v, solution[0]);
        printf("2 intersection points:\n(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
        final_cos = get_coordinates(p, v, solution[1]);
        printf("(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
    }
}

void go_cone(char **av)
{
    int p[3] = {atoi(av[2]), atoi(av[3]), atoi(av[4])};
    int v[3] = {atoi(av[5]), atoi(av[6]), atoi(av[7])};
    float *coefs = get_coefs_cone(p, v, atoi(av[8]));
    int nb_sols = get_nb_solutions(coefs[0], coefs[1], coefs[2]);
    float *solution = solve_square_equation(coefs[0], coefs[1], coefs[2]);
    float *final_cos;

    check_infinite(coefs);
    if (nb_sols == 0 || atoi(av[8]) == 0)
        printf("No intersection point.\n");
    else if (nb_sols == 1) {
        final_cos = get_coordinates(p, v, solution[0]);
        printf("1 intersection point:\n(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
    } else {
        final_cos = get_coordinates(p, v, solution[0]);
        printf("2 intersection points:\n(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
        final_cos = get_coordinates(p, v, solution[1]);
        printf("(%.3f, %.3f, %.3f)\n",
                final_cos[0], final_cos[1], final_cos[2]);
    }
}
