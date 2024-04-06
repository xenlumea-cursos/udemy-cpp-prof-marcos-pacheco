//#include <iostream>
//#include <tchar.h>
//
//int main()
//{
//	_tsetlocale(LC_ALL, _T("portuguese"));
//	int NumVidas = 5;
//	int Pontuacao = 1350;
//
//	std::cout << "*****INICIO DO JOGO*****" << std::endl;
//	std::cout << "Vidas jogador: " << NumVidas << std::endl;
//	std::cout << "Pontua��o: " << Pontuacao << std::endl;
//	std::cout << "Endere�o que NumVidas ocupa na mem�ria RAM: " << &NumVidas << std::endl;
//	std::cout << "Endere�o que Score ocupa na mem�ria RAM: " << &Pontuacao << std::endl;
//	std::cout << "************************" << std::endl;
//
//	std::cout << "********DURANTE O JOGO************" << std::endl;
//	Pontuacao = Pontuacao + 150;
//	NumVidas = NumVidas - 1;
//	std::cout << "Vidas jogador: " << NumVidas << std::endl;
//	std::cout << "Pontua��o: " << Pontuacao << std::endl;
//	std::cout << "**********************************" << std::endl;
//
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <tchar.h>

int main()
{
	//Fun��o que configura o console windows para mostrar acentos
	_tsetlocale(LC_ALL, _T("portuguese"));

	//Declara��o de Vari�veis
	//Primeiro colocamos qual o tipo de vari�vel que desejamos que
	//o computador crie ao executar nosso programa
	//neste caso escolhemos ambas como int (integer)
	//Ou seja o local da mem�ria que estamos solicitando ao computador
	//deve ser capaz de armazenar n�meros inteiros (-3, -2, -1, 0 , 1, 2)
	//Ent�o int NumVidas pode ser lido da seguinte forma:
	/*Computador por favor me fornece um local na mem�ria RAM com tamanho
	suficiente para armazenar um n�mero inteiro e coloque o nome deste local
	como sendo NumVidas*/
	/*Eu sei que voc� s� entende endere�o de mem�ria mas vai facilitar muito
	para mim se voc� nomear este endere�o de mem�ria com um nome. Desta forma
	esta abstra��o vai me permitir manipular melhor este endere�o de mem�ria
	pois seria complicado ter que ficar digitando: 010FFDC8 = 5 */
	/*BEM MELHOR SE EU USAR UM NOME AS INV�S DE UM ENDERE�O QUE � DIF�CIL
	DE MEMORIAZAR E QUE MUDA A DEPENDER DA DISPONIBILIDADE DESTE ESPA�O
	NA MEM�RIA RAM!*/

	int NumVidas = 5;
	//ACIMA O COMPUTADOR IR� ALOCAR UM ESPA�O DE MEM�RIA DO TIPO INTEIRO
	/*DEPOIS VAI AT� ESTE LOCAL NA RAM E VAI COLOCAR O VALOR 5*/
	//010FFDC8 = 5

	int Pontuacao = 1350;
	//ACIMA O COMPUTADOR IR� ALOCAR UM ESPA�O DE MEM�RIA DO TIPO INTEIRO
	/*DEPOIS VAI AT� ESTE LOCAL NA RAM E VAI COLOCAR O VALOR 1350*/
	//010FFDBC = 1350

	std::cout << "*******INICIO DO JOGO***********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "Tamanho da Vari�vel NumVidas: " << sizeof(NumVidas) << " Bytes" << "\n";
	std::cout << "Tamanho da Vari�vel Pontuacao: " << sizeof(Pontuacao) << " Bytes" << "\n";
	std::cout << "Endere�o que NumVidas Ocupa na Mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Pontua��o Ocupa na Mem�ria RAM: " << &Pontuacao << "\n";
	std::cout << "**********************************" << std::endl;

	std::cout << "*******DURANTE O JOGO***********" << std::endl;

	//V� at� a regi�o de mem�ria Rotulada com o nome Pontuacao e coloque
	//agora em o a soma do valor que est� contido nela mais 150
	//Pontuacao = 1350 + 150;
	//Pontuacao = 1500;
	Pontuacao = Pontuacao + 150; //Pontuacao += 150;

	//V� at� a regi�o de mem�ria Rotulada com o nome NumVidas e coloque
	//agora em o a subtra��o do valor que est� contido nela menos -1
	//NumVidas  = 5 - 1;
	//NumVidas = 4;
	NumVidas = NumVidas - 1; // NumVidas -= 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "**********************************" << std::endl;


	system("PAUSE");
}