#include <iostream>
#include <tchar.h>

int main2()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num;

	std::cout << "Digite um N�mero: ";

	std::cin >> num;

	switch (num)
	{
	case 1:  std::cout << "\nEscolhido N�mero 1\n";
		break;
	case 2:  std::cout << "\nEscolhido N�mero 2\n";
		break;
	case 3:  std::cout << "\nEscolhido N�mero 3\n";
		break;
	default: std::cout << "\n1,2,3 n�o foram escolhidos\n";
		break;
	}

	system("PAUSE");
	return 0;
}