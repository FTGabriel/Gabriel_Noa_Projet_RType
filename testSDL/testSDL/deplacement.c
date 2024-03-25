#include <stdio.h>
#pragma warning(disable:4996)
#include <SDL.h>
#include <time.h>
#include "deplacement.h"
#include "initialisation.h"
#include <SDL_image.h>

hauteur = 100;
epaisseur = 20;
yvaisseau1 = 400;
yvaisseau2 = 300;
x1 = 50;
x2 = 50;

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
				if (x1 + epaisseur >= 75) {
					x1 -= 20;
				}
			}
			if (event.key.keysym.sym == SDLK_RIGHT) {
				if (x1 + epaisseur <= 700) {
					x1 += 20;
				}
			}
		}
	}
}

void vaisseau2() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_KEYDOWN) {
			if (event.key.keysym.sym == SDLK_z) {
				if (yvaisseau2 + hauteur >= 100) {
					yvaisseau2 -= 30;
				}
			}
			if (event.key.keysym.sym == SDLK_s) {
				if (yvaisseau2 + hauteur <= 600) {
					yvaisseau2 += 30;
				}
			}
			if (event.key.keysym.sym == SDLK_q) {
				if (x2 + epaisseur >= 75) {
					x2 -= 20;
				}
			}
			if (event.key.keysym.sym == SDLK_d) {
				if (x2 + epaisseur <= 700) {
					x2 += 20;
				}
			}
		}
	}
}

void reinitialisation() {

}