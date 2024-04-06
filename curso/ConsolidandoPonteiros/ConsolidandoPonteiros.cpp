#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero{ 4090 };

	//precisamos iniciar o ponteiro
	//como est� ele aponta para algum endere�o qualquer
	//um valor lixo de mem�ria
	//Esta forma � um atalho para declarar e j� iniciar a vari�vel ponteiro
	//Por�m confude os iniciantes pois o operador  * est� presente
	//MAs voc� pode ler assim
	//int *ptr esta parte apenas declara uma vari�vel ponteiro de nome ptr
	//= &Numero esta parte coloca dentro da vari�vel ptr o endere�o de mem�ria da vari�vel Numero;
	//� uma simplica��o dos seguintes passos

	int* ptr;
	int* ptr2;
	ptr = &Numero;
	ptr2 = ptr;

	std::cout << "\nEndere�o dentro de ptr: " << ptr;
	std::cout << "\nEndere�o dentro de ptr2: " << ptr2;
	std::cout << "\nEndere�o de ptr na mem�ria: " << &ptr;
	std::cout << "\nEndere�o de ptr2 na mem�ria: " << &ptr2;

	*ptr2 = *ptr + 10;
	std::cout << "\nValor de Numero agora: " << Numero << "\n";

	/****
	//estas duas linhas acima � o mesmo que a linha abaixo
	//int *ptr = &Numero;

	std::cout << "\nValor da Variavel Numero: " << Numero << "\n";
	std::cout << "\nValor da Variavel ptr: " << ptr << "\n";
	std::cout << "\nValor do Endere�o de Numero: " << &Numero << "\n";
	std::cout << "\nValor do Endere�o que ptr esta carregado na mem�ria RAM: " << &ptr << "\n";
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	*ptr = 20963;
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	****/

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}
