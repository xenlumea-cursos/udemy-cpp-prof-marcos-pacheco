#include <iostream>
#include <tchar.h>

int main1()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	char letra; // Char � tratado como inteiro tabela ASCII 
	std::cout << "Entre com Letra: ";
	std::cin >> letra;

	switch (letra) // Letra na realidade � um inteiro da tabela ASCII
	{
	case 'a': std::cout << "\nEscolhido a";
		break;
	case 'b': std::cout << "\nEscolhido b";
		break;
	case 'c': std::cout << "\nEscolhido c";
		break;
	default: std::cout << "\n1,2,3 n�o foram escolhidos";
		break;
	}

	system("PAUSE");
	return 0;
}