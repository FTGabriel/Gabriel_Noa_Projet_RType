#include "main.h"
#include "elements.h"
#include <time.h>


positionbaseX = 10;
xvaisseau = 10;
yvaisseau = 250;
xmunition = 10;
epaisseurMunition = 30;
vitessex = 30;
deplacement = 0;
ymunition = 275;
int derniertir = 0;
int cooldown = 1000;

void Vaisseau() {
    SDL_Surface* image = IMG_Load("img/image_vaisseau.png");
    if (!image)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* texture = SDL_CreateTextureFromSurface(render, image);
    if (!texture)
    {
        printf("Erreur de creation de la texture : %s", SDL_GetError());
        SDL_FreeSurface(image);
        return -1;
    }
    SDL_Rect vaisseau = { xvaisseau,yvaisseau,80,60 };
    SDL_RenderCopy(render, texture, NULL, &vaisseau);
    SDL_FreeSurface(image);
}

void Munition() {
    SDL_Surface* imgmunition = IMG_Load("img/Laser Sprites/11.png");
    if (!imgmunition)
    {
        printf("Erreur de chargement de l'image : %s", SDL_GetError());
        return -1;
    }
    SDL_Texture* textumunition = SDL_CreateTextureFromSurface(render, imgmunition);
    if (!textumunition)
    {
        printf("Erreur de creation de la texture : %s", SDL_GetError());
        SDL_FreeSurface(imgmunition);
        return -1;
    }

    if (tir == 0) {
        SDL_Rect munition = { xmunition + 25, yvaisseau + 25 , 50, epaisseurMunition };
        //SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
        //SDL_RenderFillRect(render, &munition);
        SDL_RenderCopy(render, textumunition, NULL, &munition);
        SDL_FreeSurface(imgmunition);
        ymunition = yvaisseau + 25;
        tir = 1;
    }
    else {
        SDL_Rect munition = { xmunition + 25, ymunition , 50, epaisseurMunition };
        //SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
        //SDL_RenderFillRect(render, &munition);
        SDL_RenderCopy(render, textumunition, NULL, &munition);
        SDL_FreeSurface(imgmunition);
    }
}

void deplacementVaisseau() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_UP) {
                if (yvaisseau - 80 >= -45) {
                    yvaisseau -= 30;
                }
                break;
            }
            if (event.key.keysym.sym == SDLK_DOWN) {
                if (yvaisseau + 80 <= 575) {
                    yvaisseau += 30;
                }
                break;
            }
            if (event.key.keysym.sym == SDLK_LEFT) {
                if (xvaisseau - 60 >= 0) {
                    xvaisseau -= 20;
                }
                break;
            }
            if (event.key.keysym.sym == SDLK_RIGHT) {
                if (xvaisseau + 60 <= 700) {
                    xvaisseau += 20;
                }
                break;
            }
        }
    }
}

void deplacementMunition() {
    xmunition += vitessex;
    if (xmunition + epaisseurMunition >= 800) {
        tir = 0;
        xmunition = xvaisseau + 60;
    }
}

