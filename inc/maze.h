#ifndef MAZE_H
#define MAZE_H

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define MAP_WIDTH 11
#define MAP_HEIGHT 10
#define TEXTURE_WIDTH 64
#define TEXTURE_HEIGHT 64

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

/*texture global parametres*/
extern SDL_Texture *skyTexture;
extern SDL_Texture *floorTexture;
extern SDL_Texture *wallTexture;

/*functions*/
bool SDL(SDL_Window **window, SDL_Renderer **renderer);
void closeSDL(SDL_Window *window, SDL_Renderer *renderer);
void drawWalls(SDL_Renderer *renderer, SDL_Texture *skyTexture, SDL_Texture *wallTexture, SDL_Texture *floorTexture);
void miniMap(SDL_Renderer *renderer);
void handleInput(void);
void rotateCamera(double angle);
void loadTextures(SDL_Renderer *renderer, SDL_Texture **skyTexture, SDL_Texture **floorTexture, SDL_Texture **wallTexture);

#endif /* MAZE_H */
