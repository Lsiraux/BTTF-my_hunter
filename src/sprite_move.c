/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** sprite_move
*/

#include "my.h"

void sprite_move(vect_t *vector, utils_t *utils)
{
    srand(time(0));
    sfVector2f reset = {0, (rand() % 970)};
    if (vector->pos.x >= 1920) {
        sfSprite_setPosition(utils->sprite, reset);
        init_vect(vector);
    }
    else
        vector->pos.x = (vector->pos.x) + (vector->move.x);
        sfSprite_move(utils->sprite, vector->move);
}
