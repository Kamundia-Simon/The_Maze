#include "../inc/maze.h"

/* Map definition*/
int map[MAP_WIDTH][MAP_HEIGHT] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 2, 0, 0, 1},
	{1, 0, 1, 0, 1, 1, 1, 0, 0, 1},
	{1, 0, 1, 0, 0, 2, 0, 1, 0, 1},
	{1, 0, 0, 0, 1, 2, 0, 1, 0, 1},
	{1, 0, 1, 0, 1, 1, 0, 1, 0, 1},
	{1, 0, 0, 0, 1, 1, 0, 1, 0, 1},
	{1, 0, 1, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 1, 1, 0, 1, 2, 1, 0, 1},
	{1, 0, 1, 0, 2, 1, 0, 2, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};


/* Camera parameters */
/* Player Start position */
double posX = 1.5, posY = 1.5;
/* Faced starting direction */
double dirX = 1, dirY = 0;
/* Camera viewing angle  */
double planeX = 0, planeY = 0.6;
