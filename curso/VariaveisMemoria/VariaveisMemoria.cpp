#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));


	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho Variável Número: " << sizeof(Numero) << "\n";
	std::cout << "\n Tamanho Variável Salário: " << sizeof(Salario) << "\n";

	std::cout << "\n Endereço de memória da Variável Número: " << &Numero << "\n";
	std::cout << "\n Endereço de memória da Variável Número: " << &Salario << "\n";

	system("pause");
	return 0;
}
