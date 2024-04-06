#include <iostream>

int main()
{
	/*
	Crie uma variável de nome Numero do Tipo inteiro e valor inicial igual a 234;
	Crie um ponteiro de nome Ponteiro capaz de apontar para um variável do tipo inteiro.
	Troque o valor de Numero para 1456 usando Ponteiro
	Coloque o valor de Numero na tela usando Ponteiro
	Mostre o endereço da memória RAM em que estão carregados, alocados as variáveis Ponteiro e Numero
	Crie um outro ponteiro de nome OutroPtr
	Faça OutroPtr apontar para a mesma variável que ptr aponta.
	Usando Ponteiro some 200 ao valor contido em Numero
	Usando OutroPtr coloque na tela o valor de Numero
	*/
	setlocale(LC_ALL, "portuguese");

	int Numero = 234;
	int* Ponteiro = &Numero;
	*Ponteiro = 1456;
	int* OutroPonteiro = Ponteiro;

	std::cout << "\nValor de Número: " << *Ponteiro << "\n";
	std::cout << "\nEndereço de Número: " << &Numero << "\n";
	std::cout << "\nEndereço de Ponteiro: " << &Ponteiro << "\n";
	std::cout << "\nEndereço em Ponteiro: " << Ponteiro << "\n";

	*Ponteiro += 200;
	std::cout << "\nEndereço de Número usando OutroPonteiro: " << *OutroPonteiro << "\n";


	std::cout << "\n";
	system("pause");
	return 0;
}
