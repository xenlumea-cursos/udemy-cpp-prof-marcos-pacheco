#include <iostream>
//Crie uma fun��o que indique se um n�mero � par ou impar. Receba n�mero do usu�rio e exiba na tela o n�mero recebido e se ele � par ou impar.

bool isPar(int num); // Prot�tipo da fun��o

int main()
{
	int Numero;
	std::cout << "\nDigite um numero inteiro: ";
	std::cin >> Numero;

	if (isPar(Numero))
	{
		std::cout << "\nNumero: " << Numero << " PAR\n";
	}
	else // Se for impar n�o precisa especificar, basta o else.
	{
		std::cout << "\nNumero: " << Numero << " IMPAR\n";
	}
	system("PAUSE");
	return 0;
}

bool isPar(int num)
{
	if (num % 2 == 0) {
		return true;
	}
	return false;
}
