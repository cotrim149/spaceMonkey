
#include "inimigo.h"
#include "constantes.h"
#include "initException.h"
#include "mapa.h"
#include "SDL_Sprite.h"
#include "nomesArquivos.h"
#include "fileNotFoundException.h"
#include "chipanze1.h"

//inicializa os valores do inimigo
void Chipanze1::init() throw (InitException, FileNotFoundException)
{
	this->HP = INIMIGO_HP_PADRAO;
	this->dano = INIMIGO_DANO_PADRAO;
	this->vel = INIMIGO_VEL_PADRAO;
	this->hp_restante  = this->HP;
	
	try{
		this->img = new SDL_Sprite(ARQUIVO_CHIPANZE1,28, 45);//nome do arquivo e as dimensões de cada desenho da sprite
		Direcao dir=BAIXO;
		this->img->init(dir);
	}catch(bad_alloc ba){
		throw InitException("falha ao alocar o sprite do orangotango! não houve memoria suficiente!");
	}
	
}

//limpa a memoria
Chipanze1::~Chipanze1()
{
	delete this->img;
}

