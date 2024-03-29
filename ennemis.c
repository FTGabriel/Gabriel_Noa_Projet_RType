#include "main.h"
#include "ennemis.h"
#include "elements.h"
#include <time.h>
//#include <pthread.h>
//#include <unistd.h>

largeurennemis = 40;
hauteurennemis = 40;
largeurennemis2 = 50;
hauteurennemis2 = 50;
xennemis = 700;
yennemis = 0;
xennemis2 = 700;
yennemis2 = 0;
vitesseEnnemis = 6;
vitesseEnnemis2 = 4;
tempsEntreEnnemis = 3500;
tempsEntreEnnemis2 = 5000;
dernierappel = 0;
dernierappel2 = 0;

void ennemis() {
    SDL_Surface* imgennemis1 = IMG_Load("img/Spritemonstre1.bmp");
    if (!imgennemis1)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* textuennemis1 = SDL_CreateTextureFromSurface(render, imgennemis1);
    if (!textuennemis1)
    {
        printf("Erreur de creation de la texture : %s", SDL_GetError());
        SDL_FreeSurface(imgennemis1);
        return -1;
    }

    Uint32 tempsactuel = SDL_GetTicks();
    if (yennemis <= 0 || tempsactuel - dernierappel >= tempsEntreEnnemis) {
        yennemis = rand() % (580 - hauteurennemis * 2 - 20);
        xennemis = 700;
        dernierappel = tempsactuel;
    }

    SDL_Rect ennemi1 = { xennemis, yennemis, hauteurennemis, largeurennemis };
    //SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
    //SDL_RenderFillRect(render, &ennemi1);
    SDL_RenderCopy(render, textuennemis1, NULL, &ennemi1);
    SDL_FreeSurface(imgennemis1);
}

void ennemis2() {
    SDL_Surface* imgennemis2 = IMG_Load("img/ennemi2.png");
    if (!imgennemis2)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* textuennemis2 = SDL_CreateTextureFromSurface(render, imgennemis2);
    if (!textuennemis2)
    {
        printf("Erreur de creation de la texture : %s", SDL_GetError());
        SDL_FreeSurface(imgennemis2);
        return -1;
    }

    Uint32 tempsactuel = SDL_GetTicks();
    if (yennemis2 <= 0 || tempsactuel - dernierappel2 >= tempsEntreEnnemis2) {
        yennemis2 = rand() % (580 - hauteurennemis2 * 2 - 20);
        xennemis2 = 700;
        dernierappel2 = tempsactuel;
    }

    SDL_Rect ennemi2 = { xennemis2, yennemis2, hauteurennemis2, largeurennemis2 };
    //SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
    //SDL_RenderFillRect(render, &ennemi1);
    SDL_RenderCopy(render, textuennemis2, NULL, &ennemi2);
    SDL_FreeSurface(imgennemis2);
}

void deplacementEnnemis() {
    xennemis -= vitesseEnnemis;
    xennemis2 -= vitesseEnnemis2;
}

