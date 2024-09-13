# THE MAZE PROJECT

## Description
This project is a '3D' interactive game. The player experiences the game in first person.The goal of the game is for the player to navigate the maze. This version of the game does not have enemies or weapons but the can be added on later. The game can run on Ubuntu/Linux. It was written using 'SDL2' and the 'C' languange. It utilizes Raycasting to render a '2D' map into a '3D' maze. 

## Gameplay

### Requirements
The game runs on Ubuntu/Linux
The user must have 'SDL2' installed. If they do not have it the following is the installation script:
Linux/Ubuntu Terminal:
```bash
sudo apt-get install libsdl2-dev
sudo apt-get install libsdl2-image-dev
``` 

### Running the game
The first step is to clone the following repository:
```bash
https://github.com/Kamundia-Simon/The_Maze.git
```
The second step is to compile all the '.c' files using the command:
```bash
gcc -Wall -Werror -Wextra -pedantic -o maze src/*.c -lSDL2 -lSDL2_image -lm
```

The third step is to run the maze using the command:
```bash
./maze
```

### How to play
The controls in this game are:
- **W** and **UP ARROW KEY** - To move forward.
- **S** and **DOWN ARROW KEY** - To move backwards.
- **A** and **LEFT ARROW KEY** - To move to the left.
- **D** and **RIGHT ARROW KEY** - To move to the right.

The game's goal is to navigate the maze and reach the end. THe game starts with the player at the beginning of the maze. The game has a mini map which allows the player to determine how they will navigate through the game.

## Features to be deployed
The following features are yet to be implemented into the game:
- Weather
- Enemies
- Weapons
- Multiple levels


## Screenshots
![Maze appearance](/img/mazescreenshot.jpeg)
![Minimap appearance](/img/minimap.jpeg)

<b align="center">📍This project is still a work in progress and will be improved on in the future</b>


## AUTHORS
1. Simon Kamundia - simonkamundia8@gmail.com
2. Nicole Maina - kagendonikki16@gmail.com

## References

- [Raycasting](https://lodev.org/cgtutor/raycasting.html)
- [Ray-Casting Tutorial](https://permadi.com/1996/05/ray-casting-tutorial-table-of-contents/)
- [SDL2 tutorials: Lazy Foo’ Productions](https://lazyfoo.net/tutorials/SDL/index.php)

