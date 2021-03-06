#include <stdio.h>
#include <SDL/SDL.h>
#include <stdlib.h>

int main(){

	SDL_Surface *screen = NULL;
	SDL_Rect rectMap;
	SDL_Color MapColor;
	Uint32 valMapColor;

	rectMap.x = 0;
	rectMap.y = 0;
	rectMap.w = 40;
	rectMap.h = 40;

	MapColor.r = 255;
	MapColor.g = 255;
	MapColor.b = 255;

	int width = 800, height = 600;
	int bpp= 16;
	
	Uint32 video_options = SDL_HWSURFACE | SDL_DOUBLEBUF;
	int rc;
	
	rc = SDL_Init(SDL_INIT_VIDEO);

	if(rc ==-1){
		fprintf(stdout, "Nao foi possivel inicializar a tela: %s\n", SDL_GetError());
		return -1;
	}

	atexit(SDL_Quit);

	SDL_WM_SetCaption("SpaceMonkey", "SpaceMonkey");
	SDL_WM_SetIcon(SDL_LoadBMP("/opt/spacemonkey/resources/DownMonkeyLogo.bmp"), NULL);

	screen = SDL_SetVideoMode(width, height, bpp, video_options);

	if(!screen){
		fprintf(stdout, "Erro ao carregar video com estas configuracoes: %s\n", SDL_GetError());
		return -2;
	}

	valMapColor = SDL_MapRGB(screen->format, MapColor.r, MapColor.g, MapColor.b);

	int i;
	int j;

	for(i=0; i<10; i++){
		for(j=0; j<3; j++){
			SDL_FillRect(screen, &rectMap, valMapColor);
			rectMap.x += 40;
		}
		rectMap.x = 0;
		rectMap.y += 40;
	}

	SDL_UpdateRect(screen, 0, 0, 0, 0);

	

	SDL_Delay(10000);

	return 0;
}

