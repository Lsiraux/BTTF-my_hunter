/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char const *str)
{
    char i;
    char c;

    i = 0;
    c = str[0];
    while (c != '\0') {
        i++;
        c = str[i];
    }
    return (i);
}
