
#include "initialisation.h"

void init() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {

		printf("Erreur SDL INIT FAILED\n");
		return -1;
	}
}

void window() {
	wind = SDL_CreateWindow("Pong",
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

void fermer() {
	SDL_DestroyRenderer(render);
	SDL_DestroyWindow(wind);
	SDL_Quit();
}