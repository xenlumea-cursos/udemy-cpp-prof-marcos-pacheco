#include <iostream>

// Podemos informar ao compilador que a função existe e que iremos declarar ela posteriormente.
// Isso é feito através dos prótipos das funções.
// Coloque apenas o cabeçalho da função terminado com ";".

float soma(float num1, float num2);


int mainX()
{
	// A execução do programa é realizada de cima para baixo, desta forma o compilador ainda não sabe da existência da função soma. Antes a declaração da função estava em cima e assim o compilador já sabia onde estava a declação da função
	// Agora a declaração está embaixo e ocorre erro, pois o compilador não sabe ainda quem é e onde está declarada a função soma.
	// Tudo isso porque é TOP-DOWN
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2)
{
	return (num1 + num2);
}