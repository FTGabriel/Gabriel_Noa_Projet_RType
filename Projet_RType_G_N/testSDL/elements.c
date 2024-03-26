#include "main.h"
#include "initialisation.h"

void Vaisseau() {
    SDL_Rect dest_rect = { 0, 0, 0, 0 };
    SDL_Surface* image = IMG_Load("C:/Users/nducrot/Downloads/projetshooter/img");
    if (!image)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(render, image);
    if (!texture)
    {
        printf("Erreur de création de la texture : %s", SDL_GetError());
        SDL_FreeSurface(image);
        return -1;
    }

    SDL_Rect vaisseau = { 10,250,80,60 };

    SDL_RenderCopy(render, texture, NULL, &vaisseau);
    SDL_FreeSurface(image);
}