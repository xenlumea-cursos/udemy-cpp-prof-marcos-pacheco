#include <iostream>

/*
4) Utilizando o comando System(COLOR CorFundoCorTexto) e altere a cor de exibi��o da
fonte no terminal de sa�da para uma cor de sua prefer�ncia.
*/

int main()
{
	system("COLOR E0"); // fundo AMARELO e cor da letra PRETA
	std::cout
		<< "Vou" << "\n"
		<< "aprender" << "\n"
		<< "a" << "\n"
		<< "programar" << "\n"
		<< "na" << "\n"
		<< "Linguagem C++" << "\n\n";

	system("PAUSE");
	return 0;
}
