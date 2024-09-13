#include "../inc/maze.h"
/**
 * SDL - initializes SDL and creates a window and renderer
 * @window: pointer to window
 * @renderer: pointer to renderer
 * Return: true in successfull otherwise false
*/

bool SDL(SDL_Window **window, SDL_Renderer **renderer)
{
	/*Initialize SDL*/
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize SDL_Error: %s\n", SDL_GetError());
		return (false);
	}
	/*initialize textures*/
	if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
	{
		printf("SDL could not initialize textures SDL_Error: %s\n", SDL_GetError());
		return (false);
	}
	/*Create window*/
	*window = SDL_CreateWindow("The Maze", SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (!*window)
	{
		printf("Could not create window SDL_Error: %s\n", SDL_GetError());
		return (false);
	}
	else
		*renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED);

	if (!*renderer)
	{
		printf("Could not create renderer SDL Error: %s\n", SDL_GetError());
		return (false);
	}
	return (true);
}

/**
 * main - The maze entry point
 * Return: 0 if success otherwise 1
 */

int main(void)
{
	SDL_Window *window = NULL;
	SDL_Renderer *renderer = NULL;
	SDL_Texture *skyTexture = NULL;
	SDL_Texture *floorTexture = NULL;
	SDL_Texture *wallTexture = NULL;

	if (!SDL(&window, &renderer))
	{
		printf("Initialisation failed\n");
		return (1);
	}
	loadTextures(renderer, &skyTexture, &floorTexture, &wallTexture);

	bool quit = false;
	SDL_Event e;

	while (!quit)
	{
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}

			/*Add functions*/
			SDL_Delay(16);
			drawWalls(renderer, skyTexture, wallTexture, floorTexture);
			miniMap(renderer);
			SDL_RenderPresent(renderer);
			handleInput();
	}
	closeSDL(window, renderer);
	return (0);
}

/**
 * closeSDL - clearup memory
 * @window: pointer to window
 * @renderer: pointer to renderer
 */

void closeSDL(SDL_Window *window, SDL_Renderer *renderer)
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}
