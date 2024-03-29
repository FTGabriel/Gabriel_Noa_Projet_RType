#pragma once
#include <stdio.h>
#include <SDL.h>
#include "initialisation.h"
#include "ennemis.h"
#include <time.h>
#include <SDL_ttf.h>
#include <SDL_image.h>
//#include "texte.h"


void init();
void window();
void renderer();
void Vaisseau();
void Munition();
void deplacementMunition();
void deplacementEnnemis();
void collision();
void collisionVaisseau();
void ennemis();
void ennemis2();
//void init_Text(SDL_Renderer* render);
//void apparition_Text(SDL_Surface* textSurface, TTF_Font* font);
void Background();
void deplacementVaisseau();