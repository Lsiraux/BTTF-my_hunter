/*
** EPITECH PROJECT, 2022
** BTTF-my_hunter
** File description:
** init_second
*/
#include "my.h"

void init_texture(utils_t *utils)
{
    utils->texture = sfTexture_createFromFile("bird_rio3.png", NULL);
    utils->textureback = sfTexture_createFromFile("background_sheet.png",\
    NULL);
}
