#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

#include "jogo.cpp"

int main()
{
	//cria um jogo e o executa
	Jogo spaceMonkey;
	spaceMonkey.rodarJogo();
	//o jogo j� acabou, ent�o encerra o programa tamb�m
	return 0;
}


