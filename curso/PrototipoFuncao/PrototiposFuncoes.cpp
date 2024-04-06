#include <iostream>

// Podemos informar ao compilador que a fun��o existe e que iremos declarar ela posteriormente.
// Isso � feito atrav�s dos pr�tipos das fun��es.
// Coloque apenas o cabe�alho da fun��o terminado com ";".

float soma(float num1, float num2);


int mainX()
{
	// A execu��o do programa � realizada de cima para baixo, desta forma o compilador ainda n�o sabe da exist�ncia da fun��o soma. Antes a declara��o da fun��o estava em cima e assim o compilador j� sabia onde estava a decla��o da fun��o
	// Agora a declara��o est� embaixo e ocorre erro, pois o compilador n�o sabe ainda quem � e onde est� declarada a fun��o soma.
	// Tudo isso porque � TOP-DOWN
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2)
{
	return (num1 + num2);
}