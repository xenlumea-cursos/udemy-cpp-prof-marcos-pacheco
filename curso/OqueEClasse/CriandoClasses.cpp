#include <iostream>

class Casa
{
	//Estes s�o os atributos, as propriedades da classe e s�o representados por vari�veis.
	//Estes atributos ser�o as caracter�sticas de cada objeto criado a partir desta classe
	//Quando o programa estiver sendo executado e queremos saber qual � a situa��o do objeto em rela��o ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto

	//Por padr�o em uma classe a visibilidade � do tipo private
	//logo se n�o for indicado nenhuma visibilidade o padr�o � ser private(privado)
public:
	//private: esta indicando que estes atributos s� poder�o ser acessados diretamente no c�digo da classe Casa
	//Agora se colocar public estes atributos estar�o acess�veis fora do c�digo da classe
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	//No geral voc� coloca b na frente de uma vari�vel bool para indicar que ela � do tipo booleana(bool)
	bool bTemSuite{ true };

	//public significa que estar� aces�vel fora do c�digo da classe
public:
	//Estas s�o as opera��es da classe, ou m�todos ou as fun��es que o objeto poder� executar quando for criado(instanciado) a partir desta classe.
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	//Melhor � criar um m�todo para que seja alterado o n�mero de quartos
	//seguindo a regra que voc� vai estabelecer na regra de neg�cios do sistema
	//por exemplo se o max de quartos for 6(seis)

}; // este � o c�digo da classe... E voc� pode indicar que tipo de visibilidade ter� partes deste c�digo

int main()
{
	Casa CasaDePraia;
	//como a fun��o main est� fora do c�digo da classe, dentro dela n�o ser� poss�vel acessar membros privados da classe Casa!
	//Contudo poder� ser acessado os membros public(p�blicos)
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);
	std::cout << "\n Num Quartos: " << CasaDePraia.ObtenhaNumeroDeQuartos();
	/*ESTA PARTE FOI CORRIGIDA COLOCANDO O COMANDO ? NA LINHA ABAIXO DO std::cout */
	std::cout << "\n Tem Suite: ";
	CasaDePraia.TemSuite() ? (std::cout << "Sim") : (std::cout << "Nao") << "\n";
	//Para acessar os membros da classe Casa usamos neste caso a nota��o ponto.
	//NomedoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoMetodo ou fun��o

	std::cout << "\n";
	//Observer que acessar diretamente este atributo � complicado
	//outra classe ou m�todo(fun��o) pode alterar o valor para algo errado!
	//o ideal � manter os atributos da classe escondidos, privados e acess�veis apenas dentro da classe
	system("PAUSE");
	return 0;
}

//O operador escopo neste caso indica que o m�todo(a fun��o) MostrarTamanho() pertence a classe Casa
//Estes c�digos pertencem a classe casa e portanto podem acessar diretamente os seus atributos privados
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
	//
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