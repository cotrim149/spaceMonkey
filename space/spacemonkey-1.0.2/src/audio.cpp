
#include <SDL/SDL.h>
#include"audio.h"
#include "constantes.h"
#include "fileNotFoundException.h"

SDL_AudioSpec* Audio::spec = NULL;
Uint8* Audio::bufferAudio = 0;


void Audio::setAudioSpec(SDL_AudioSpec *sp)
{
	spec = sp;
}

void Audio::callback(void *userdata, Uint8 *stream, int len)
{

}

void Audio::setAudio(string nome_audio)throw (FileNotFoundException)
{
	SDL_AudioSpec wavSpec;
	Uint32 wavLen;
	Uint8 *wavBuffer;

	if (SDL_LoadWAV( ( PATH+nome_audio).c_str() , &wavSpec, &wavBuffer, &wavLen) == NULL)
		throw FileNotFoundException( string("Erro ao inicializar a musica: ") + string(SDL_GetError()));	
	bufferAudio = wavBuffer;
	//por ele pra tocar aqui
}

void Audio::stopAudio()
{
	//código para faze-lo parar
	
	//fecha tudo
	SDL_FreeWAV(bufferAudio);
}

