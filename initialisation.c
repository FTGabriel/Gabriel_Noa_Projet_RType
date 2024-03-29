#include "initialisation.h"

// Initialisation de la SDL
void init() {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("Erreur lors de l'initialisation de la SDL : %s\n", SDL_GetError());
        return -1;
    }
}


// Cr�ation de la fen�tre
void window() {
    wind = SDL_CreateWindow("Shooter",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        800, 600, SDL_WINDOW_SHOWN);
    if (wind == NULL) {
        printf("Erreur lors de la cr�ation de la fen�tre : %s\n", SDL_GetError());
        SDL_Quit();
        return -1;
    }
}

void renderer() {
    render = SDL_CreateRenderer(wind, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (render == NULL) {
        printf("Erreur creation rendu SDL\n");
        SDL_DestroyWindow(wind);
        SDL_Quit();
        return -1;
    }
}

void Background() {
    SDL_Surface* fond = IMG_Load("img/terre.jpg");
    if (!fond)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* texture_fond = SDL_CreateTextureFromSurface(render, fond);
    if (!texture_fond)
    {
        printf("Erreur de cr�ation de la texture : %s", SDL_GetError());
        SDL_FreeSurface(fond);
        return -1;
    }
    SDL_Rect background = { 0,0,800,600 };
    SDL_RenderCopy(render, texture_fond, NULL, &background);
    SDL_FreeSurface(fond);
}

