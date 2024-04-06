#include <iostream>

//criado um alias(apelido) para int chamado inteiro
//desta forma quando o c�digo for compilado o pr�-processador vai substituir todas as ocorr�ncias de inteiro por int e depois de finalizar tudo isso o pr�-processador entrega o c�digo ao compilador

typedef int inteiro;
//Idem criar um alias para char de nome caractere, assim voc� poder� declarar uma vari�vel do tipo char utilizando o nome caractere
typedef char caractere;
//O mesmo para float que agora tem um alias real. Importante destacar que voc� ainda poder� utilizar os tipos cl�ssicos. Isso n�o � uma substitui��o...
typedef float real;

int main()
{
	//Aqui � o mesmo que int Numero{12}
	inteiro Numero{ 12 };
	caractere Letra{ 'A' };
	float Nota{ 2.3 };
	real Media{ 7.0 };
	std::cout << Numero << "\n";
	std::cout << Letra << "\n";
	std::cout << Nota << "\n";
	std::cout << Media << "\n";

	system("PAUSE");
	return 0;
}
