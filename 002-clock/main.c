#include <stdio.h>
#include "SDL.h"
#include <time.h>
#include <stdbool.h>

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

#define WID 5
#define LEN 55


int main(int argc, char *argv[])
{
    struct tm* timebuf;
    SDL_Init(SDL_INIT_EVERYTHING);

    Uint32 rmask, gmask, bmask, amask;

    rmask = 0xff000000;
    gmask = 0x00ff0000;
    bmask = 0x0000ff00;
    amask = 0x000000ff;

    SDL_Window* win = SDL_CreateWindow("Clock", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, NULL);
    SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_Surface* bg = SDL_CreateRGBSurface(0, WINDOW_WIDTH, WINDOW_HEIGHT, 32, rmask, gmask, bmask, amask);

    Uint32 light = SDL_MapRGB(bg->format, 28, 247, 120);
    Uint32 dark = SDL_MapRGB(bg->format, 9, 84, 40);

    timebuf = localtime(time(NULL));
    printf("Time: ");

    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
}