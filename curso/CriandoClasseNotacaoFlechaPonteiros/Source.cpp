#include <iostream>

class Casa
{

private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);

};

int main()
{
	/*   Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/
	Casa* CasaDePraia = new Casa();
	//Agora voc� est� criando, instanciando um objeto via aloca��o din�mica de mem�ria, utilizando ponteiros*. Basicamente � o mesmo que Declarar da forma que voc� declarou na aula passada. Ou seja ser� criado um objeto baseado na classe Casa e o endere�o de mem�ria deste objeto ser� colocado em CasaDePraia.

	//Contudo trata-se de um ponteiro. Lembre... Como acessar o apontado pelo ponteiro? Isso mesmo com desrefenciamento*
	//Logo CasaDePraia.ObtenhaNumeroDeQuartos() devemos usar
	//*ptr mas neste caso o ponteiro � CasaDePraia 
	//Logo para desreferenciar ele voc� faz *CasaDePraia
	//Mas agora voc� est� diante de uma nova estrutura de vari�vel
	//Ele cont�m diversos atributos e m�todos(fun��es)
	//Que s�o acess�veis via ponto.
	//Mas se fizer isso apenas estaria errado
	//O correto � assim
	//(Endere�oqueponteiroaponta).Atributo;
	//(Endere�oquefuncaoaponta).funcao();
	//(*CasaDePraia).MostrarTamanho();
	//(*CasaDePraia).ObtenhaNumeroDeQuartos();
	//Mas ficar digitando toda hora dois par�nteses, um asterisco e um ponto ficou cansativo!!!
	//Os criadores da linguagem criaram ent�o um atalho para esta nota��o
	//(*CasaDePraia). � o mesmo que CasaDePraia->
	//� a chamada nota��o flecha
	//(*). Trocou-se 4 caracteres por apenas 2 ->
	//Mas � importante que voc� saiba que tudo � nota��o ponto.
	//Logo quando voc� digitar: 
	//CasaDePraia->SetNumQuartos(5);
	//� o mesmo que:
	//(*CasaDePraia).SetNumQuartos(5);


	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: ";
	CasaDePraia->TemSuite() ? std::cout << "Sim" : std::cout << "N�o" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}
