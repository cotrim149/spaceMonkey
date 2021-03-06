#ifndef GORILA2_H
#define GORILA2_H

#include "inimigo.h"
#include "initException.h"
#include "constantes.h"
#include "fileNotFoundException.h"

class Gorila2 : public Inimigo
{
public:
	void init() throw (InitException, FileNotFoundException);
	~Gorila2();
	int getHp();
	int getDano();
	int getVel();
	void mover(Direcao dir);
	void mover();
};

#endif

