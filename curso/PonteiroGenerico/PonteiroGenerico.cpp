#include <iostream>

int main() {


	int Numero{ 4890 };
	char Letra{ 'E' };
	void* ptrG;

	ptrG = &Letra;

	std::cout << "\nValor de Letra via ptrG = " << *(char*)ptrG;
	//primeiro você faz o cast e depois coloca o sinal de desreferenciamento
	//*(cast para tipo desejado)NomePonteiroGenerico
	//*(char*)ptrG
	//agora o compilador sabe que deverá ler 1(byte) para colocar um char na tela!

	ptrG = &Numero;
	std::cout << "\nValor de Numero via ptrG: " << *(int*)ptrG << "\n";


	std::cout << std::endl;
	system("pause");
	return 0;
}
