#include "../inc/maze.h"

/**
 * loadTextures - gives walls textures
 * @renderer: pointer to render
 * @skyTexture: Pointer to the sky texture
 * @floorTexture: Pointer to the floor texture
 * @wallTexture: Pointer to the wall texture
 */
void loadTextures(SDL_Renderer *renderer, SDL_Texture **skyTexture,
		SDL_Texture **floorTexture, SDL_Texture **wallTexture)
{
	/*SkyTexture*/
	*skyTexture = IMG_LoadTexture(renderer, "img/sky.png");
	if (!*skyTexture)
	{
		printf("Failed to load sky Texture SDL_Error: %s\n", SDL_GetError());
	}
	*floorTexture = IMG_LoadTexture(renderer, "img/grass.png");
	if (!*floorTexture)
	{
		printf("Failed to load floor texture SDL_Error: %s\n", SDL_GetError());
	}

	*wallTexture = IMG_LoadTexture(renderer, "img/redbrick.png");
	if (!*wallTexture)
	{
		printf("Failed to load wall texture SDL_Error: %s\n", SDL_GetError());
	}
}
