#pragma once
#include <iostream>
#include <string>

//este � o arquivo .h � onde existem apenas as declara��es dos atributos e m�todos da classe. Aqui n�o existem as defini��es, implementa��es das fun��es, pois isso ser� feito no arquivo .cpp. � a separa��o do O QU� (.h) do COMO (.cpp)

class Conta
{
	//indica que o acesso a estes membros abaixo de private:
	//s� ser� permitido de dentro do c�digo da classe
private:
	std::string Banco;
	int Agencia;
	int NumConta;
	std::string Titular;
	double Saldo;

	//indica que os membros abaixo podem ser acessados pelo objeto da classe Conta fora do c�digo da classe Conta.
public:
	Conta();
	Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);
	~Conta();
	bool Sacar(double Valor);
	void Depositar(double Valor);
	//Neste caso o par�metro Destino recebe apenas uma c�pia
	//do valor do objeto. Ele n�o tem como alterar o objeto
	//pois s� recebeu uma c�pia dele
	//Logo podemos usar o conceito de refer�ncia para passar a refer�ncia do objeto e com isso Destino vai poder alterar este objeto pois ser� realizada uma passagem de argumentos por Refer�ncia e n�o mais por valor
	void Transferir(Conta& Destino, double Valor);
	double ConsultarSaldo();
	std::string GetBanco();
	int GetAgencia();
	int GetNumConta();
	std::string GetTitular();
	void GetEnderecoThis();
	void SetBanco(std::string Banco);
	void SetAgencia(int Agencia);
	void SetTitular(std::string Titular);
	void SetNumConta(int NumConta);

};
