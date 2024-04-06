#include <iostream>
#include "FuncoesMenu.h"

//#include <> vai procurar no diretorio padr�o include do compilador. J� #include "" procura no diret�rio corrente, 
//atual de seu programa

//Aqui � COMO? como as fun��es do arquivo .h ser�o implementadas?
//neste aquivo .cpp voc� coloca a implemta��o de todas as fun��es do arquivo .h relacionado
//Implementa��o das fun��es

//a fun��o n�o retorna nada, logo o tipo de retorno � vazio(void). Al�m disso a fun��o n�o possui 
//nenhuma vari�vel local(Par�metros). Como n�o retorna nada n�o precisamos usar comando return

void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";

	} while (ProcessarEscolha(RetornarEscolha()) != 3); // Executa RetornarEscolha e pega o n�mero digitado para comparar com a condi��o diferente de 3
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	// Executa processar escolha exibindo a mensagem, passando o numero digitado.
	return escolha; // Devolve o numero digitado
}

int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOp��o Inv�lida!!!\n";
	}
	return(TipoEscolha);

}
