#include <iostream>
#include "FuncoesMenu.h"

//#include <> vai procurar no diretorio padrão include do compilador. Já #include "" procura no diretório corrente, 
//atual de seu programa

//Aqui é COMO? como as funções do arquivo .h serão implementadas?
//neste aquivo .cpp você coloca a implemtação de todas as funções do arquivo .h relacionado
//Implementação das funções

//a função não retorna nada, logo o tipo de retorno é vazio(void). Além disso a função não possui 
//nenhuma variável local(Parâmetros). Como não retorna nada não precisamos usar comando return

void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";

	} while (ProcessarEscolha(RetornarEscolha()) != 3); // Executa RetornarEscolha e pega o número digitado para comparar com a condição diferente de 3
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua opção: ";
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
	default: std::cout << "\nOpção Inválida!!!\n";
	}
	return(TipoEscolha);

}
