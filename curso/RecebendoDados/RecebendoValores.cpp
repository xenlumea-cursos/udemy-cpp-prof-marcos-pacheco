#include <iostream>

int main() {

	int Numero01, Numero02;
	int Resultado;

	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01 = " << Numero01 << std::endl;

	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02 = " << Numero02 << std::endl;

	Resultado = Numero01 + Numero02;
	std::cout << "A soma dos dois numeros: " << Resultado << "\n";

	Resultado = Numero01 - Numero02;
	std::cout << "A subtracao dos dois numeros: " << Resultado << "\n";

	Resultado = Numero01 * Numero02;
	std::cout << "A multiplicacao dos dois numeros: " << Resultado << "\n";

	Resultado = Numero01 / Numero02;
	std::cout << "A divisão dos dois numeros: " << Resultado << "\n";

	Resultado = Numero01 % Numero02;
	std::cout << "A Resto da Divisao inteira dos dois Numeros: " << Resultado << "\n";

	std::cout << std::endl;
	system("pause");
	return 0;

}
