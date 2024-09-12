#include "..inc/maze.h"

bool showMap = true;
SDL_Renderer *renderer = NULL;

void miniMap(void)
{
	/*Scale Parameters for the minimap*/
	int mapScale = 10;
	/*Position mini-map at the top left corner of the screen*/
	int offsetX = 10;
	int offsetY = 10;

	for (int y = 0; y < MAP_HEIGHT; y++)
	{
		for (int x = 0; x < MAP_WIDTH; x++)
		{
			SDL_Rect rect = {offetX + x * mapScale, offsetY + y *mapScale, mapScale, mapScale};
			if (map[x][y] > 0)
			{
				SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
			}
			else
			{
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			}
			SDL_RenderFillRect(renderer, &rect);
		}
	}

	/* Player Position on mini-Map */
	SDL_Rect playerRect = {offset X + mapscale - 2, offsetY + posY * mapscale -2, 4, 4};
	SDL_SetRenderDrawColor = (renderer, 255, 0, 0, 255);
	SDL_RenderFillRecr(renderer, &playerRect);

	/* Draw line of sight */
	 SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	 SDL_RenderDrawLine(renderer,
                       offsetX + posX * mapScale,
                       offsetY + posY * mapScale,
                       offsetX + (posX + dirX * 5) * mapScale,
                       offsetY + (posY + dirY * 5) * mapScale);
