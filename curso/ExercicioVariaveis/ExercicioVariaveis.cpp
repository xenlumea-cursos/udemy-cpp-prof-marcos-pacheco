#include <iostream>

/*Crie um programa em C++ que:
Declara uma vari�vel do tipo int de nome NumComputadores
Declara uma vari�vel do tipo int de nome SerialComputadores
Inicia a vari�vel NumComputadores com o valor 100;
Inicia a vari�vel SerialComputadores com o valor 11111;
Coloca na tela uma linha com cifr�es $$$$$$$$$$$$$$
Coloca na tela o nome e os valores das vari�veis NumComputadores e SerialComputadores
Coloca nom final na tela uma linha com cifr�es $$$$$$$$$$$$$$
Obs: lembre-se de colocar o comando para Pausar a Tela
*/

int main()
{
	//Cria um local na mem�ria do tipo inteiro (int) de nome NumComputadores e coloca neste local o valor 100

	int NumComputadores = 100;
	//Cria um local na mem�ria do tipo inteiro (int) de nome SerialComputadores e coloca neste local o valor 11111
	int SerialComputadores = 11111;

	//Coloca na tela cifr�es
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
	//Coloca na tela uma tabula��o com \t e depois o texto Valor de NumComputadores = e depois coloca o valor da vari�vel NumComputadores na tela e d� uma quebra de linha com std::endl
	std::cout << "\tValor de NumComputadores = " << NumComputadores << std::endl;
	//Coloca na tela uma tabula��o com \t e depois o texto Valor de SerialComputadores = e depois coloca o valor da vari�vel SerialComputadores na tela e d� uma quebra de linha com std::endl
	std::cout << "\tValor de SerialComputadores = " << SerialComputadores << std::endl;
	//Coloca na tela cifr�es
	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;

	system("PAUSE");
	return 0;
}
