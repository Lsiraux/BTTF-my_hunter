/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** sprite_move
*/

#include "my.h"

void sprite_move(sfSprite *sprite, sfVector2f pos, sfVector2f move)
{
    srand(time(0));
    sfVector2f reset = {0, (rand() % 970)};
    if (pos.x >= 1920) {
        sfSprite_setPosition(sprite, reset);
        // initv();
    }
    else 
        pos.x = (pos.x) + (move.x);
        sfSprite_move(sprite, move);
}