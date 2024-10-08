#include "../inc/maze.h"
/**
 * rotateCamera - changes camera direction
 * @angle: point to direction
 */

void rotateCamera(double angle)
{
	/*Rotate direction*/
	double oldDirX = dirX;

	dirX = dirX * cos(angle) - dirY * sin(angle);
	dirY = oldDirX * sin(angle) + dirY * cos(angle);

	/*Rotate camera plane*/
	double oldPlaneX = planeX;

	planeX = planeX * cos(angle) - planeY * sin(angle);
	planeY = oldPlaneX * sin(angle) + planeY * cos(angle);
}

/**
 * moveForwardBackward- allows camera to move forwards or backwards
 */

void moveForwardBackward(void)
{
	const Uint8 *state = SDL_GetKeyboardState(NULL);
	double moveSpeed = 0.05; /*Speed of movement*/

	/*move forward (w)*/
	if (state[SDL_SCANCODE_W] || state[SDL_SCANCODE_UP])
	{
		double newX = posX + dirX * moveSpeed;
		double newY = posY + dirY * moveSpeed;

		/*Check for collision with walls*/
		if (map[(int)newX][(int)posY] == 0)
			posX = newX;
		if (map[(int)posX][(int)newY] == 0)
			posY = newY;
	}

	/*move backward (S)*/
	if (state[SDL_SCANCODE_S] || state[SDL_SCANCODE_DOWN])
	{
		double newX = posX - dirX * moveSpeed;
		double newY = posY - dirY * moveSpeed;

		/*Check for collision with walls*/
		if (map[(int)newX][(int)posY] == 0)
			posX = newX;
		if (map[(int)posX][(int)newY] == 0)
			posY = newY;
	}
}

/**
 * rotateLeftRight - allows the camera to rotate either left or right
 */

void rotateLeftRight(void)
{
	const Uint8 *state = SDL_GetKeyboardState(NULL);
	double rotSpeed = 0.03;   /*Speed of rotation*/

	/*Move left (A)*/
	if (state[SDL_SCANCODE_A] || state[SDL_SCANCODE_LEFT])
	{
		double oldDirX = dirX;

		dirX = dirX * cos(rotSpeed) - dirY * sin(rotSpeed);
		dirY = oldDirX * sin(rotSpeed) + dirY * cos(rotSpeed);
		double oldPlaneX = planeX;

		planeX = planeX * cos(rotSpeed) - planeY * sin(rotSpeed);
		planeY = oldPlaneX * sin(rotSpeed) + planeY * cos(rotSpeed);
	}

	/*Move right (D)*/
	if (state[SDL_SCANCODE_D] || state[SDL_SCANCODE_RIGHT])
	{
		double oldDirX = dirX;

		dirX = dirX * cos(-rotSpeed) - dirY * sin(-rotSpeed);
		dirY = oldDirX * sin(-rotSpeed) + dirY * cos(-rotSpeed);
		double oldPlaneX = planeX;

		planeX = planeX * cos(-rotSpeed) - planeY * sin(-rotSpeed);
		planeY = oldPlaneX * sin(-rotSpeed) + planeY * cos(-rotSpeed);
	}
}

/**
 * handleInput - handles movement input
 */

void handleInput(void)
{
	moveForwardBackward();
	rotateLeftRight();
}
