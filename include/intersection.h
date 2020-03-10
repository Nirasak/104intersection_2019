/*
** EPITECH PROJECT, 2019
** intersection.h
** File description:
** intersection.h
*/

#ifndef INTERSECTION_H
#define INTERSECTION_H

#define ERROR 84

#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

float *solve_square_equation(float a, float b, float c);
float *get_coordinates(int *p, int *v, float t);
float *get_coefs_sphere(int *p, int *v, int r);
float *get_coefs_cylinder(int *p, int *v, int r);
float *get_coefs_cone(int *p, int *v, int teta);
int get_nb_solutions(float a, float b, float c);
void go_cylinder(char **av);
void go_sphere(char **av);
void go_cone(char **av);
int intersection(char **av);
void check_infinite(float *coefs);
#endif
