#include <SDL.h>
#include <stdio.h>
#include "initialisation.h"

int main(int argc, char* argv[]) {

    init();
    window();
    renderer();


    SDL_Rect dest_rect = { 10, 10, 640, 400 };
    SDL_Surface* image = IMG_Load("C:/Users/nducrot/python/jeu/image/bouton_6.png");
    if (!image)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(render, image);
    SDL_RenderCopy(render, texture, NULL, NULL);

    // Attendre quelques secondes avant de fermer la fenêtre
    SDL_Delay(5000);

    // Fermeture de la fenêtre et de la SDL
    SDL_DestroyWindow(wind);
    SDL_Quit();

    return 0;
}