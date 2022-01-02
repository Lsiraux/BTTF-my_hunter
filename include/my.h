/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "vect.h"
#include "utils.h"

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
void hit_duck(sfVector2f pos, sfSprite *sprite, sfRenderWindow *window);
char *my_strcat(char const *src1, char const *src2);
void set_rect(sfIntRect *rect);
void modify_rect(sfIntRect *rect);
int my_putstr(char const *str);
sfSprite *set_background();
char value(int nbr);
void my_revstr(char *str);
int my_getnbr(char *str);
int my_put_nbr(int nb);
void sprite_move(sfSprite *sprite, sfVector2f pos, sfVector2f move);
char *decimaltobase(int nbr);
void init_vect(vect_t *vector);
void init_clocks(utils_t *clock);
int main();

#endif /* !MY_H_ */
