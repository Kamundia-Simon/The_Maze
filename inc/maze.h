#ifndef MAZE_H
#define MAZE_H

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define MAP_WIDTH 11
#define MAP_HEIGHT 10

#include <SDL2/SDL.h>
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <SDL2/SDL_image.h>

/*Global Variables*/
extern SDL_Window *window;
extern SDL_Renderer *renderer;

/* Define Map*/
extern int map[MAP_WIDTH][MAP_HEIGHT];

/*Camera parametres global vaiables*/
extern double posX, posY;
extern double dirX, dirY;
extern double planeX, planeY;
extern bool showMap;


bool SDL(SDL_Window **window, SDL_Renderer **renderer);
void closeSDL(SDL_Window *window, SDL_Renderer *renderer);
void drawWalls(SDL_Renderer *renderer);
void miniMap(void);
void handleInput(void);
void rotateCamera(double angle);

#endif /* MAZE_H */
