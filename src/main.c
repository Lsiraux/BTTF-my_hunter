/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "my.h"

void print_options(void)
{
    my_putstr("Hello, welcome to Catch Rio ! The game is simple: ");
    my_putchar('\n');
    my_putstr("click on the birds using [LEFT_CLICK] ");
    my_putstr("to score some points ! Good luck !");
}

int main (int ac, char **av)
{
    if (ac == 2 && (av[1][0] == 'h' || av[1][1] == 'h')) {
        print_options();
    }
    return 0;
}