/*
** EPITECH PROJECT, 2021
** init.c
** File description:
** init
*/

#include "my.h"



sfText *set_text(sfVector2f pos, sfVector2f scale, int *i)
{
    sfText *score;
    sfFont *font;
    font = sfFont_createFromFile("bitmap.TTF");
    score = sfText_create();
    sfText_setPosition(score, pos);
    sfText_setColor(score, sfWhite);
    sfText_setScale(score, scale);
    sfText_setString(score, my_strcat("points: ", "0"));
    sfText_setFont(score, font);
}

sfText *set_text2(sfVector2f pos, sfVector2f scale)
{
    sfText *score;
    sfFont *font;
    font = sfFont_createFromFile("bitmap.TTF");
    score = sfText_create();
    sfText_setPosition(score, pos);
    sfText_setColor(score, sfBlue);
    sfText_setScale(score, scale);
    sfText_setString(score, "CATCH RIO");
    sfText_setFont(score, font);
}

sfSprite *set_sprite(sfVector2f my_pos, sfVector2f scale, sfTexture *texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, my_pos);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}