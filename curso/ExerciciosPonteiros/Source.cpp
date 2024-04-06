#include <iostream>

int main()
{
	/*
	Crie uma vari�vel de nome Numero do Tipo inteiro e valor inicial igual a 234;
	Crie um ponteiro de nome Ponteiro capaz de apontar para um vari�vel do tipo inteiro.
	Troque o valor de Numero para 1456 usando Ponteiro
	Coloque o valor de Numero na tela usando Ponteiro
	Mostre o endere�o da mem�ria RAM em que est�o carregados, alocados as vari�veis Ponteiro e Numero
	Crie um outro ponteiro de nome OutroPtr
	Fa�a OutroPtr apontar para a mesma vari�vel que ptr aponta.
	Usando Ponteiro some 200 ao valor contido em Numero
	Usando OutroPtr coloque na tela o valor de Numero
	*/
	setlocale(LC_ALL, "portuguese");

	int Numero = 234;
	int* Ponteiro = &Numero;
	*Ponteiro = 1456;
	int* OutroPonteiro = Ponteiro;

	std::cout << "\nValor de N�mero: " << *Ponteiro << "\n";
	std::cout << "\nEndere�o de N�mero: " << &Numero << "\n";
	std::cout << "\nEndere�o de Ponteiro: " << &Ponteiro << "\n";
	std::cout << "\nEndere�o em Ponteiro: " << Ponteiro << "\n";

	*Ponteiro += 200;
	std::cout << "\nEndere�o de N�mero usando OutroPonteiro: " << *OutroPonteiro << "\n";


	std::cout << "\n";
	system("pause");
	return 0;
}
