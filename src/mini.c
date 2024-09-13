#include "../inc/maze.h"

/**
 * miniMap - draws a mini map of the maze
 * @renderer: points to render
 */
void miniMap(SDL_Renderer *renderer)
{
	bool showMap = true;

	if (!showMap)
		return;
	/*Minimap settings*/
	int mapScale = 10; /*Scale for minimap*/
	int offsetX = 10; /*Offset on left edge of screen*/
	int offsetY = 10; /* Offset on top edge of screen*/

	for (int y = 0; y < MAP_HEIGHT; y++)
	{
		for (int x = 0; x < MAP_WIDTH; x++)
		{
			SDL_Rect rect = {offsetX + x * mapScale, offsetY +
				y * mapScale, mapScale, mapScale};

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
	SDL_Rect playerRect = {offsetX + posX * mapScale - 2, offsetY
		+ posY * mapScale - 2, 4, 4};

	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_RenderFillRect(renderer, &playerRect);
	/* Draw line of sight */
	SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
	SDL_RenderDrawLine(renderer,
			offsetX + posX * mapScale,
			offsetY + posY * mapScale,
			offsetX + (posX + dirX * 5) * mapScale,
			offsetY + (posY + dirY * 5) * mapScale);
}
