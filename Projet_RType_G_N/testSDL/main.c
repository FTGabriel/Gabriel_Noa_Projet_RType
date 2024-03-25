#include <SDL.h>
#include <stdio.h>
#include "main.h"
#include "initialisation.h"

int main(int argc, char* argv[]) {
	init();
	window();
	renderer();
	while (1) {
		SDL_SetRenderDrawColor(render, 0, 0, 0, 255);
		SDL_RenderClear(render);
		forme();
		vaisseau1();
		vaisseau2();
		reinitialisation();
		SDL_RenderPresent(render);
		SDL_Delay(10);
	}
	fermer();
	return 0;
}