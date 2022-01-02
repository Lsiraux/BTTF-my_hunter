/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    char i;
    char c;

    i = 0;
    c = str[0];
    while (c != '\0') {
        my_putchar(str[i]);
        i++;
        c = str[i];
    }
}
