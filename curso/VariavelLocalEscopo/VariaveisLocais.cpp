#include <iostream>

int main()
{
	// Aqui i foi declardo fora do escopo, do bloco de c�digo do for
	int i;

	for (i = 0; i < 5; i++)
	{
		int j = i + 2;
		std::cout << i << " " << j << std::endl;
	}

	std::cout << std::endl << "Valor de I: " << i << std::endl;

	//std::cout << "\nValor final de i: " << i;
	//std::cout << "\nValor final de j: " << j;
	//isso � o escopo de uma vari�vel!
	//Qual a visibilidade dela? Local, Global. Se local em que bloco? Qual o tempo de vida dela?
	//Relembrando que o par�metros das fun��es s�o vari�veis locais a estas fun��es!
	//int soma(int x, int y) escopo local!''

	//por�m agora j foi declarado dentro do bloco de c�digo do comando for. Logo quando este bloco de c�digo chegar ao fim a vari�vel j que � local a este bloco, ser� destru�da e n�o mais estar� acess�vel. Ela (j) somente � acess�vel dentro do comando for 
	//quando a fun��o atingir aqui a vari�vel i n�o sair� da mem�ria, n�o ser� destruida pois est� fora deste escopo
	system("PAUSE");
	return 0;
}
