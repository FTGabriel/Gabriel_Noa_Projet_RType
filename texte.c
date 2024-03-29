#include "main.h"
#include "initialisation.h"
#include "texte.h"
score = 0;

void init_Text(SDL_Renderer* render) {
    
    TTF_Init();
    TTF_Font* font = TTF_OpenFont("font/arial.ttf", 24);
    if (!font) {
        printf("Erreur lors du chargement de la police TTF : %s\n", TTF_GetError());
        return 1;
    }

    char scoreText[20]; 

    SDL_Color textColor = { 255, 255, 255 }; 
    SDL_Surface* textSurface = TTF_RenderText_Solid(font, score, textColor); 
    SDL_Texture* textTexture = SDL_CreateTextureFromSurface(render, textSurface);

    SDL_FreeSurface(textSurface);
    
}

void apparition_Text(SDL_Surface* textSurface, TTF_Font* font) {
    SDL_Rect dstRect = { 10, 40, textSurface->w, textSurface->h };
    SDL_RenderCopy(renderer, textTexture, NULL, &dstRect);
    SDL_DestroyTexture(textTexture);
    TTF_CloseFont(font);
}