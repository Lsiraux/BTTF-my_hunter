/*
** EPITECH PROJECT, 2022
** init_vect.c
** File description:
** init_vect
*/
#include "my.h"

void init_vect(vect_t *vector)
{
    srand(time(0));
    vector->textpos.x = 1680;
    vector->textpos.y = 30;
    vector->textscale.x = 1;
    vector->textscale.y = 1;
    vector->pos.x = 0;
    vector->pos.y = rand() % 900;
    vector->move.x = 6;
    vector->move.y = 0;
    vector->scale.x = 1;
    vector->scale.y = 1;
    vector->posback.x = 0;
    vector->posback.y = 0;
    vector->scaleback.x = 1;
    vector->scaleback.y = 1; 
}