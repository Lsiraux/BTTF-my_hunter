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
#include <time.h>

sfText *set_text(vect_t *vector, utils_t *utils);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
void hit_duck(sfVector2f pos, sfSprite *sprite, sfRenderWindow *window);
char *my_strcat(char const *src1, char const *src2);
void set_rect(utils_t *utils);
void modify_rect(utils_t *utils);
int my_putstr(char const *str);
sfSprite *set_bird(vect_t *vector, utils_t *utils);
void init_texture(utils_t *utils);
void set_background(vect_t *vector, utils_t *utils);
char value(int nbr);
void my_revstr(char *str);
int my_getnbr(char *str);
int my_put_nbr(int nb);
void sprite_move(vect_t *vector, utils_t *utils);
char *decimaltobase(int nbr);
void init_vect(vect_t *vector);
void check_hitbox(vect_t *vector, sfRenderWindow *window, sfSprite *sprite);
void init_clock(utils_t *clock);
sfRenderWindow *create_renderwindow(unsigned int width, unsigned int height,
                                    unsigned int bpp, char *title);

#endif /* !MY_H_ */
