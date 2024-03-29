#include "initialisation.h"
#include "main.h"
#include "ennemis.h"
#include "elements.h"


int main(int argc, char* argv[]) {

    init();
    window();
    renderer();
    Background();
    //init_Text(render);
    while (1) {
        SDL_RenderClear(render);
        Background();
        Vaisseau();
        deplacementVaisseau();
        //apparition_Text(textSurface, font);
        Munition();
        deplacementMunition();
        ennemis();
        ennemis2();
        deplacementEnnemis();
        collision();
        collisionVaisseau();
        SDL_RenderPresent(render);
        SDL_Delay(10);}

    SDL_Delay(70000);
    SDL_DestroyRenderer(render);
    TTF_Quit();
    SDL_DestroyWindow(wind);
    SDL_Quit();

    return 0;
}