/*
** EPITECH PROJECT, 2021
** Cgraphical
** File description:
** rect
*/

#include "my.h"

void set_rect(utils_t *utils)
{
    utils->rect.top = 0;
    utils->rect.left = 0;
    utils->rect.width = 110;
    utils->rect.height = 110;
}

void modify_rect(utils_t *utils)
{
    if (utils->rect.left == 220) {
        utils->rect.left = 0;
    }
    else if (utils->rect.left != 220) {
        utils->rect.left = (utils->rect.left) + 110;
    }
}