#include <SDL.h>
#include <stdio.h>
#include "main.h"
#include "initialisation.h"

int main(int argc, char* argv[]) {

    init();
    window();
    renderer();

    SDL_RenderPresent(render);

    // Attendre quelques secondes avant de fermer la fen�tre
    SDL_Delay(70000);

    // Fermeture de la fen�tre et de la SDL
    SDL_RenderClear(render);
    SDL_DestroyWindow(wind);
    SDL_Quit();

    return 0;
}