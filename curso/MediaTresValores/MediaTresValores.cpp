#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float Num1, Num2, Num3;
	float Media = 0.0f;

	std::cout << "Digite o Primeiro N�mero: ";
	std::cin >> Num1;
	std::cout << "Digite o Segundo N�mero: ";
	std::cin >> Num2;
	std::cout << "Digite o Terceiro N�mero: ";
	std::cin >> Num3;

	Media = (Num1 + Num2 + Num3) / 3;

	std::cout << "N�meros Digitados: " << Num1 << " " << Num2 << " " << Num3 << "\n";
	std::cout << "M�dia dos N�meros: " << Media << "\n";


	system("pause");
	return 0;
}
