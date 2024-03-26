#include "main.h"
#include "elements.h"
#define deplacement_vaisseau

hauteur = 50;
epaisseur = 20;
xvaisseau = 10;
yvaisseau = 250;

void Vaisseau() {
    SDL_Rect dest_rect = { 0, 0, 0, 0 };
    SDL_Surface* image = IMG_Load("C:/Users/nducrot/Downloads/projetshooter/img/image_vaisseau.png");
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

    SDL_Rect vaisseau = { xvaisseau,yvaisseau,80,60 };
    SDL_RenderCopy(render, texture, NULL, &vaisseau);
    SDL_FreeSurface(image);
}

void deplacement() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_KEYDOWN) {
            if (event.key.keysym.sym == SDLK_UP) {
                if (yvaisseau - hauteur >= 0) {
                    yvaisseau -= 30; } }
            if (event.key.keysym.sym == SDLK_DOWN) {
                if (yvaisseau + hauteur <= 600) {
                    yvaisseau += 30; } }
            if (event.key.keysym.sym == SDLK_LEFT) {
                if (xvaisseau - epaisseur >= 0) {
                    xvaisseau -= 20; } }
            if (event.key.keysym.sym == SDLK_RIGHT) {
                if (xvaisseau + epaisseur <= 750) {
                    xvaisseau += 20; } } } } }

void munition(SDL_Renderer* render) {
    SDL_Rect munition = { xvaisseau, yvaisseau, 10, 10 };
    SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
    SDL_RenderFillRect(render, &munition);
}