
#include "menus.h"
#include "fase.h"
#include "tela.h"
#include "jogador.h"
#include "constantes.h"
#include <string>

void Menus::init()
{
	this->jogador = new Jogador();
}

Menus::~Menus()
{
	delete (this->jogador);
	Tela::liberarTela();
}

//mostra a animação inicial do jogo. Ao terminar executa o menuInicial
void Menus::apresentacaoInicial()
{
	Tela *apresentacao = Tela::obterTela();
	
	//COLOCAR O CÓDIGO DA APRESENTAÇÃO INICIAL AQUI!
	
	//~apresentacaoInicial();
	menuInicial();
}

//mostra o menu inicial pro jogador. cada opção do menu levará a outra função desta classe
void Menus::menuInicial()
{
	Tela *menu = Tela::obterTela();
	
	//COLOCAR O CÓDIGO DA APRESENTAÇÃO INICIAL AQUI!
	
	//isso aqui acontece só ao receber o evento certo!!!
	//~menu();
	iniciaJogo();
}

//função realizada ao clicar em iniciar jogo no menu Inicial
void Menus::iniciaJogo()
{
	Fase *fases[NUM_FASES_TOTAIS];
	
	string nome_mapa;
	int i;
	for(i=0; i<NUM_FASES_TOTAIS; i++)
	{
		switch(i)
		{
		case 0:
			nome_mapa = "mapa1.bmp";
			fases[i] = new Fase(nome_mapa, i+1, this->jogador);
			fases[i]->init();
			
			SDL_Delay(3000);
			fases[i]->~Fase();
			break;
		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		}
//descomentar após fazer todas as fases!!!		fases[i]->~Fase();		
	}
}

