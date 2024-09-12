#ifndef MAZE_H
#define MAZE_H

#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <SDL2/SDL_image.h>

/*Global Variables*/
extern SDL_Window *window;
extern SDL_Renderer *renderer;

bool SDL(SDL_Window **window, SDL_Renderer **renderer);
void closeSDL(SDL_Window *window, SDL_Renderer *renderer);
