/*
** EPITECH PROJECT, 2021
** init.c
** File description:
** init
*/

#include "my.h"



sfText *set_text(vect_t *vector, utils_t *utils)
{
    utils->font = sfFont_createFromFile("bitmap.TTF");
    utils->score = sfText_create();
    sfText_setPosition(utils->score, vector->textpos);
    sfText_setColor(utils->score, sfWhite);
    sfText_setScale(utils->score, vector->textscale);
    sfText_setString(utils->score, my_strcat("points: ", "0"));
    sfText_setFont(utils->score, utils->font);
}

sfSprite *set_sprite(sfVector2f scale, sfVector2f pos, sfSprite *sprite, sfTexture *texture)
{
    sprite = sfSprite_create();

    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}

sfSprite *backsprite(vect_t *vector, utils_t *utils, sfTexture *texture)
{
    utils->spriteback = sfSprite_create();

    sfSprite_setScale(utils->spriteback, vector->scaleback);
    sfSprite_setPosition(utils->spriteback, vector->posback);
    sfSprite_setTexture(utils->spriteback, texture, sfFalse);
    return utils->spriteback;
}

sfSprite *set_bird(vect_t *vector, utils_t *utils)
{
    utils->sprite = 
}

sfSprite *set_background(vect_t *vector, utils_t *utils)
{
    utils->background = set_sprite(vector, utils, utils->textureback);
    // return utils->background;
}

sfRenderWindow *create_renderwindow(unsigned int width, unsigned int height, unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {width, height, bpp};

    return (sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL));
}

void init_clock(utils_t *clock)
{
    clock->animate = sfClock_create();
    clock->movement = sfClock_create();
}

