#include <iostream>
#include <string>


int mainDesativado()
{
	bool bAcesso;
	std::string SenhaDeAcesso = "cmaismais";
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/*Se a senha digitada pelo usu�rio e armazenada na vari�vel SenhaDigitada for igual a senha de acesso as instru��es ap�s o if ser�o executadas pois a condi��o foi verdadeira true 1 */
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\nAcesso Permitido!" << "\n";
		//aqui aproveitamos para indicar que o acesso foi concedido
		//atrav�s de outra vari�vel booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	}
	/*Se a condi��o for falsa ent�o as isntru��es do else ser�o executadas*/
	else
	{
		std::cout << "\n Acesso Negado!!!" << "\n";
		system("PAUSE");
		exit(0); //sai do programa, for�a o fechamento da aplica��o
	}

	return 0;
}

