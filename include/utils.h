/*
** EPITECH PROJECT, 2022
** utils.h
** File description:
** utils
*/
#include "my.h"

#ifndef UTILS_H_
#define UTILS_H_


typedef struct {
    sfClock *movement;
    sfClock *animate;
    sfEvent event;
    sfTexture *texture;
    sfTexture *backimage;
    sfIntRect rect;
    sfText *score;
    sfFont *font;
    sfSprite *sprite;
    sfSprite *background;
} utils_t;

#endif /* !UTILS_H_ */
