#ifndef FASE_H
#define FASE_H

#include <string>
#include "jogador.h"
#include "fileNotFoundException.h"
#include "mapa.h"

using namespace std;

/**
classe que representa as fases. cada objeto � uma fase diferente.
*/
class Fase
{
private:
	//mapa (background) da fase
	Mapa *mapaFase;
	//refer�ncia ao jogador, puxado da classe menu
	Jogador *jogador;
	//nome do arquivo de imagem do mapa
	string nome_mapa;
	//numero da fase (usado para o objeto saber qual fase ele �)
	int num_fase;
	//numero de hordas da fase (definido pelo num_fase)
	int num_hordas;
	//numero medio de inimigos por horda (definido pelo num_fase)
	int num_medio_inimigos_por_horda;
public:
	Fase(string nome_mapa, int num_fase, Jogador *jogador);
	//inicia o mapa e o desenha na tela, al�m de iniciar as hordas
	void init() throw (FileNotFoundException);
	~Fase();
};

#endif
