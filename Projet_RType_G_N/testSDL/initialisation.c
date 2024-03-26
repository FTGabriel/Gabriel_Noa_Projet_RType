#include "initialisation.h"

void init() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {

		printf("Erreur SDL INIT FAILED\n");
		return -1;
	}
}

void window() {
	wind = SDL_CreateWindow("RType",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		800, 600, SDL_WINDOW_SHOWN);
	if (wind == NULL) {
		printf("Erreur creation de la fenetre SDL\n");
		SDL_Quit();
		return -1;
	}
}

void renderer() {
	render = SDL_CreateRenderer(wind, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (render == NULL) {
		printf("Erreur creation rendu SDL\n");
		SDL_DestroyWindow(wind);
		SDL_Quit();
		return -1;
	}
}

void forme() {
	SDL_Rect vaisseau1 = { xvaisseau1,yvaisseau1,epaisseur,hauteur };
	SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
	SDL_RenderFillRect(render, &vaisseau1);

	//SDL_Rect vaisseau2 = { xvaisseau2,yvaisseau2,epaisseur,hauteur };
	//SDL_SetRenderDrawColor(render, 255, 255, 255, 255);
	//SDL_RenderFillRect(render, &vaisseau2);
}

void fermer() {
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(wind);
	SDL_Quit();
}