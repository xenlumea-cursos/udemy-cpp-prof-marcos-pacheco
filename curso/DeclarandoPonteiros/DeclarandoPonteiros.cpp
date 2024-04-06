#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	//ent�o para declarar uma vari�vel que seja considerada um ponteiro
	//basta colocar <tipo a ser apontado> *<nome da vari�vel>
	int* ptr;
	//obs: a posi��o do asterisco neste caso n�o importa
	//int* ptr; //d� no mesmo!


	int Numero = 101;
	ptr = &Numero;
	*ptr = 103;
	//Aqui vamos colocar na tela o endere�o de mem�ria
	//da vari�vel N�mero. Ou seja onde ela est� carregada na mem�ria RAM. Lembre-se que o que vai para tela � o primeiro endere�o da vari�vel n�mero
	//pois ela ocupa 4 endere�os pois tem 4 bytes de tamanho

	std::cout << "\nEndere�o de N�mero: " << &Numero;
	//ALGO IMPORTANTE AQUI: &ptr vai colocar na tela o endere�o de mem�ria alocado para vari�vel ponteiro
	//ou seja qual lugar da RAM ele est� alocado?
	//veja n�s ainda n�o estamos colocando na tela nada que esteja dentro das vari�veis.
	//pois para colocar o que est� dentro das vari�veis
	//n�s usamos apenas o nome da vari�vel!
	//exemplo std::cout << Numero
	//std::cout << ptr

	std::cout << "\nEndere�o de ptr: " << &ptr << "\n";

	system("PAUSE");
	return 0;
}
