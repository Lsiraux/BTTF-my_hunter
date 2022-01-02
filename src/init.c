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
    sfText_setPosition(utils->score, vector->pos);
    sfText_setColor(utils->score, sfWhite);
    sfText_setScale(utils->score, vector->scale);
    sfText_setString(utils->score, my_strcat("points: ", "0"));
    sfText_setFont(utils->score, utils->font);
}

sfSprite *set_sprite(vect_t *vector, utils_t *utils)
{
    utils->sprite = sfSprite_create();

    sfSprite_setScale(utils->sprite, vector->scale);
    sfSprite_setPosition(utils->sprite, vector->pos);
    sfSprite_setTexture(utils->sprite, utils->texture, sfFalse);
}

sfSprite *set_background(vect_t *vector, utils_t *utils)
{
    utils->backimage = sfTexture_createFromFile("background_sheet.png", NULL);
    utils->background = set_sprite(vector, utils);
}

static sfRenderWindow *create_renderwindow(unsigned int width, unsigned int height, unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {width, height, bpp};

    return (sfRenderWindow_create(video_mode, title, sfResize | sfClose, NULL));
}

void init_clock(utils_t *clock)
{
    clock->animate = sfClock_create();
    clock->movement = sfClock_create();
}

