/*
** EPITECH PROJECT, 2021
** B-MUL-100-LYN-1-1-myhunter-gregoire1.biganzoli
** File description:
** hit_duck
*/

#include "my.h"

void check_hitbox(vect_t *vector, sfRenderWindow *window, sfSprite *sprite)
{
    srand(time(0));
    sfVector2f reset;
    reset.x = 0;
    reset.y = rand() % 900;
    float mousey = (float)(sfMouse_getPosition((const sfWindow *) window).y);
    float mousex = (float)(sfMouse_getPosition((const sfWindow *) window).x);

    if ((mousex  >= vector->pos.x && mousex <= (vector->pos.x) + 100) && \
    (mousey  >= vector->pos.y && mousey <= (vector->pos.y) + 100))
    {
        sfSprite_setPosition(sprite, reset);
        init_vect(vector);
    } else
        return;
}