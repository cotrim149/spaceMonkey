#ifndef ATIRADOR_SIMPLES_H
#define ATIRADOR_SIMPLES_H

#include "torre.h"
#include "fileNotFoundException.h"
#include "initException.h"

class AtiradorSimples : public Torre
{
private:

public:
	void init() throw (InitException, FileNotFoundException);
	static Torre* createTorre();
	~AtiradorSimples();
};

#endif
