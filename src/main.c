#include <stdio.h>
#include <stdlib.h>
#include "game.h"

#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
        if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0) 
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }
    //Game loop and other utils
    printf("Game is about to start...\n");

    //Close the SDL
    SDL_Quit();
    return 0;
}