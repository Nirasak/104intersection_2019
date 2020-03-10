/*
** EPITECH PROJECT, 2019
** intersection_utils.c
** File description:
** intersection utils
*/

#include "intersection.h"

float *solve_square_equation(float a, float b, float c)
{
    float delta = pow(b, 2) - 4 * a * c;
    float *x = malloc(sizeof(float) * 2);

    if (a == 0) {
        x[0] = -c / b;
        x[1] = 0;
        return (x);
    }
    if (delta > 0) {
        x[1] = (- b - sqrt(delta)) / (2 * a);
        x[0] = (-b + sqrt(delta)) / (2 * a);
    } else if (delta == 0) {
        x[0] = -(b / (2 * a));
        x[1] = 0;
    }
    return (x);
}

float *get_coordinates(int *p, int *v, float t)
{
    float *result = malloc(sizeof(float) * 3);

    result[0] = (float) p[0] + (t * (float) v[0]);
    result[1] = (float) p[1] + (t * (float) v[1]);
    result[2] = (float) p[2] + (t * (float) v[2]);
    return (result);
}

float *get_coefs_sphere(int *p, int *v, int r)
{
    float *coefs = malloc(sizeof(float) * 3);

    coefs[0] = pow(v[0], 2) + pow(v[1], 2) + pow(v[2], 2);
    coefs[1] = 2 * (p[0] * v[0] + p[1] * v[1] + p[2] * v[2]);
    coefs[2] = (pow(p[0], 2) + pow(p[1], 2) + pow(p[2], 2)) - pow(r, 2);
    return (coefs);
}

float *get_coefs_cylinder(int *p, int *v, int r)
{
    float *coefs = malloc(sizeof(float) * 3);

    coefs[0] = pow(v[0], 2) + pow(v[1], 2);
    coefs[1] = 2 * (p[0] * v[0]) + 2 * (p[1] * v[1]);
    coefs[2] = pow(p[0], 2) + pow(p[1], 2) -(r * r);
    return (coefs);
}

float *get_coefs_cone(int *p, int *v, int teta)
{
    float *coefs = malloc(sizeof(float) * 3);

    if (teta * M_PI / 180 == M_PI / 2)
        exit(84);
    coefs[0] = pow(v[0], 2) + pow(v[1], 2) -
    (pow(tan(teta * M_PI / 180), 2) * pow(v[2], 2));
    coefs[1] = 2 * (p[0] * v[0] + p[1] * v[1] -
    (pow(tan(teta * M_PI / 180), 2) * p[2] * v[2]));
    coefs[2] = pow(p[0], 2) + pow(p[1], 2) -
    (pow(tan(teta * M_PI / 180), 2) * pow(p[2], 2));
    return (coefs);
}