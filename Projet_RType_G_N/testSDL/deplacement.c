#include <stdio.h>
#pragma warning(disable:4996)
#include <SDL.h>
#include <time.h>
#include "deplacement.h"
#include "initialisation.h"
#include <SDL_image.h>

hauteur = 50;
epaisseur = 20;
yvaisseau1 = 250;
//yvaisseau2 = 350;
xvaisseau1 = 50;
//xvaisseau2 = 50;
xprojectile = 0;
yprojectile = 0;
sizeprojectile = 10;

void vaisseau1() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_KEYDOWN) {
			if (event.key.keysym.sym == SDLK_UP) {
				if (yvaisseau1 + hauteur >= 100) {
					yvaisseau1 -= 30;
				}
			}
			if (event.key.keysym.sym == SDLK_DOWN) {
				if (yvaisseau1 + hauteur <= 600) {
					yvaisseau1 += 30;
				}
			}
			if (event.key.keysym.sym == SDLK_LEFT) {
				if (xvaisseau1 + epaisseur >= 75) {
					xvaisseau1 -= 20;
				}
			}
			if (event.key.keysym.sym == SDLK_RIGHT) {
				if (xvaisseau1 + epaisseur <= 700) {
					xvaisseau1 += 20;
				}
			}
			if (event.key.keysym.sym == SDLK_SPACE) {
				
			}
		}
	}
}

//void vaisseau2() {
//	SDL_Event event;
//	while (SDL_PollEvent(&event)) {
//		if (event.type == SDL_KEYDOWN) {
//			if (event.key.keysym.sym == SDLK_z) {
//				if (yvaisseau2 + hauteur >= 100) {
//					yvaisseau2 -= 30;
//				}
//			}
//			if (event.key.keysym.sym == SDLK_s) {
//				if (yvaisseau2 + hauteur <= 600) {
//					yvaisseau2 += 30;
//				}
//			}
//			if (event.key.keysym.sym == SDLK_q) {
//				if (xvaisseau2 + epaisseur >= 75) {
//					xvaisseau2 -= 20;
//				}
//			}
//			if (event.key.keysym.sym == SDLK_d) {
//				if (xvaisseau2 + epaisseur <= 700) {
//					xvaisseau2 += 20;
//				}
//			}
//		}
//	}
//}

void reinitialisation() {

}