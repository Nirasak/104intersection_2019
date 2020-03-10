/*
** EPITECH PROJECT, 2020
** test_intersection.c
** File description:
** test intersection
*/

#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "intersection.h"

void redirect_stdout(void)
{
    cr_redirect_stdout();
}

Test(intersection, test_one, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "1", "0", "0", "2", "1", "1", "0", "1"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_two, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "1", "4", "0", "3", "0", "0", "-2", "4"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_three, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "2", "0", "0", "2", "1", "1", "0", "1"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_four, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "3", "-1", "-1", "-1", "1", "1", "5", "30"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_five, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "2", "1", "0", "0", "0", "0", "1", "1"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_six, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "1", "1", "0", "0", "1", "1", "1", "3"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_seven, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "2", "1", "10", "0", "1", "0", "1", "3"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_eight, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "2", "1", "2", "0", "1", "2", "1", "0"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_nine, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "3", "1", "2", "0", "1", "2", "1", "0"};

    cr_assert_eq(intersection(av), 0);
}

Test(intersection, test_ten, .init = redirect_stdout)
{
    char *av[9] = {
        "./104intersection", "3", "1", "2", "0", "1", "2", "0", "1"};

    cr_assert_eq(intersection(av), 0);
}
