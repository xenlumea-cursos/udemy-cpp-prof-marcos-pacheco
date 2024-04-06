#include <iostream>
#include <string>

/*Criada um struct, um modelo para cria��o de objetos deste tipo
Importante destacar que at� aqui no final */
struct Livro
{
	int ID;
	std::string Titulo;
	std::string Autor;
	std::string Editora;
};//aqui n�o existir� cria��o de nada na mem�ria RAM, isso ou esta struct � apenas um modelo para cria��o de outras vari�veis
/*quando fora criada uma variavel do tipo desta struct, o compilador ir� usar este molde, este modelo para arrumar e armazenar dados na mem�ria RAM*/

int main()
{
	//Aqui foi criada uma variavel de nome livro(poderia ser outro nome)
	//como livro � diferente de Livro pode ser feito, mas confunde...
	/*logo aqui temos a cria��o na mem�ria RAM de uma vari�vel de nome livro
	e que ser� criada a partir do modelo da struct Livro*/
	//Em c++ podemos retirar a palavra struct ao criar uma vari�vel do tipo struct
	Livro livro;

	//A partir de agora podemos acessar os campos desta variavel livro atraves da nota��o ponto(.)
	std::cout << "***Cadastro de Livro***" << "\n";
	std::cout << "Digite ID do Livro: ";
	std::cin >> livro.ID;

	std::cout << "\nDigite o Titulo do livro: ";
	std::cin.ignore();
	std::getline(std::cin, livro.Titulo);

	std::cout << "\nDigite o Autor do Livro: ";
	std::getline(std::cin, livro.Autor);

	std::cout << "\nDigite a Editor do Livro: ";
	std::getline(std::cin, livro.Editora);

	std::cout << "ID: " << livro.ID << "\n";
	std::cout << "Titulo: " << livro.Titulo << "\n";
	std::cout << "Autor: " << livro.Autor << "\n";
	std::cout << "Editora: " << livro.Editora << "\n";

	system("PAUSE");
	return 0;
}