#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));


	int Numero = 10;
	double Salario = 4567.90;
	std::cout << "\n Tamanho Vari�vel N�mero: " << sizeof(Numero) << "\n";
	std::cout << "\n Tamanho Vari�vel Sal�rio: " << sizeof(Salario) << "\n";

	std::cout << "\n Endere�o de mem�ria da Vari�vel N�mero: " << &Numero << "\n";
	std::cout << "\n Endere�o de mem�ria da Vari�vel N�mero: " << &Salario << "\n";

	system("pause");
	return 0;
}
