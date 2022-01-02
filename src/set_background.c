/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** set_background
*/

#include "my.h"

sfSprite *set_background()
{
    sfVector2f pos = {0, 0};
    sfVector2f scale = {1, 1};

    sfTexture *texture = sfTexture_createFromFile("seaop.png", NULL);
    sfSprite *sprite = set_sprite(pos, scale, texture);
    return sprite;
}
