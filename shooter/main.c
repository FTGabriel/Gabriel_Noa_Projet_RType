#include "main.h"
#include "initialisation.h"

int main(int argc, char* argv[]) {
	init();
	window();
	renderer();

	while (1) {
		SDL_SetRenderDrawColor(render, 0, 0, 0, 255);
		SDL_RenderClear(render);
		SDL_Surface* image = IMG_Load("image.png");
		if (!image)
		{
			printf("Erreur de chargement de l'image : %s", SDL_GetError());
			return -1;
		}
	}
	fermer();
	return 0;
}