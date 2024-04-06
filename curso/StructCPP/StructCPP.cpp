#include <iostream>
struct Data
{
	//Como n�o espefiquei o modificador de acesso
	// na struct ele ser� por padr�o public:
	static int contador;
	int id;
	int Dia;
	int Mes;
	int Ano;
	Data()
	{
		//como contador � est�tico ele n�o vai perder o valor e potanto ir� incrementar
		// de um a cada chamada do destrutor.
		id = contador++;
		std::cout << "\nConstrutor Data(" << id << ") executado" << "\n";
	}
	~Data() { std::cout << "\nDestrutor ~Data(" << id << ") executado" << "\n"; }
};

//desta forma acima voc� pode iniciar os valores ao instanciar e usar chaves

int Data::contador = 1;

int main()
{

	{
		//Como contador � uma v�ri�vel est�tica podemos acessar ela com nome da classe ou struct
		Data Agenda1;
		//aqui criei um novo ESCOPO pois lembre que entre chaves � um escopo
		//e vai determinar o ciclo de vida das vari�veis
		//quando c�digo ultrapassar a chave final as vari�veis declaradas dentro
		// do escopo ser�o destru�das
		{
			Data Agenda2;
			//Agora este objeto Agenda3 est� na Heap e n�o ser� destru�do ao 
			//final do escopo
			//ele ser� destru�do se for utilizada a fun��o delete
			Data* Agenda3 = new Data;
			delete(Agenda3);

		}

		Data Agenda4;


	}

	system("PAUSE");
	return 0;
}
