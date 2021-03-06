#ifndef CLASS_JOGADOR
#define CLASS_JOGADOR

using namespace std;

/**
classe que representa o jogador
*/
class Jogador
{
private:
	static int moedas;
	static const int MOEDAS_INICIAIS = 100;
public:
	//inicia o número de moedas que ele possui
	Jogador();
	//retorna o nº de moedas que ele possui
	static int getMoedas();
	//soma coins moedas ao total que o jogador possui
	static void ganharMoedas(int coins);
	//subtrai coins moedas ao total que o jogador possui
	static void perderMoedas(int coins);
};


#endif

