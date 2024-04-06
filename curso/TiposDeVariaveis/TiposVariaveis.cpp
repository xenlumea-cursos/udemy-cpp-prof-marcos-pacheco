#include <iostream>
#include <iomanip>
/**/
int main()
{
	int Numero;
	Numero = 45;

	float Numero2;
	Numero2 = 55.56f;

	double Numero3;
	Numero3 = 123456.123456;

	char Caractere = '3';
	char Caractere2 = 'k';

	// boolean
	bool bAchou;
	bAchou = 1;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "sdfasdfsa"; //Qualquer valor diferente de 0 vira true ao ser atribuída à variavel do tipo bool
	std::cout << "Valor de bAchou: " << bAchou << "\n\n";

	//int
	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da variavel Numero: " << sizeof(Numero) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero << std::endl << "\n";

	//float
	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da variavel Numero2: " << sizeof(Numero2) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero2 << std::endl << "\n";

	//double
	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variavel Numero3: " << sizeof(Numero3) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << &Numero3 << std::endl << "\n";

	//char
	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da variavel Numero2: " << sizeof(Caractere) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << (void*)&Caractere << std::endl << "\n";

	//char2
	std::cout << "Valor Caractere: " << Caractere2 << std::endl;
	std::cout << "Tamanho da variavel Numero2: " << sizeof(Caractere2) << " Bytes" << std::endl;
	std::cout << "Endereco carregado na memoria: " << (void*)&Caractere2 << std::endl << "\n";

	system("pause");
	return 0;
}
/**/
