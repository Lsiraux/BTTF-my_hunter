/*
** EPITECH PROJECT, 2021
** Cgraphical
** File description:
** rect
*/

#include "my.h"

void set_rect(sfIntRect *rect)
{
    rect->top = 0;
    rect->left = 0;
    rect->width = 1100;
    rect->height = 1100;
}

void modify_rect(sfIntRect *rect)
{
    if (rect->left == 7700) {
        rect->left = 0;
    }
    else if (rect->left != 7700) {
        rect->left = (rect->left) + 1100;
    }
}