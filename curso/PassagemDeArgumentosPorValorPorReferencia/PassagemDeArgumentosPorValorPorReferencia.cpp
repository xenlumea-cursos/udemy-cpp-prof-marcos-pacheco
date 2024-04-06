#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos para a fun��o por
//Refer�ncia. S� que agora utilizando ponteiros
//Lembre-se ponteiros s�o vari�veis que possuem dentro delas um endere�o de outra vari�vel
//Al�m disso eles precisam ser desreferenciados para chegar ao valor apontado ou alter�-lo

//Aqui foi indicado que a fun��o deve receber endere�os de mem�ria
//Pois trata-se de dois ponteiros..
//Ent�o quando enviar para fun��o voc� deve enviar o endere�o de mem�ria das vari�veis. E estes endere�os ser�o colocados nestas vari�veis
void TrocaNumeros(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Numero1, Numero2;
	std::cout << "\nDigite o primeiro N�mero: ";
	std::cin >> Numero1;
	std::cout << "\nDigite o Segundo N�mero: ";
	std::cin >> Numero2;
	std::cout << "\nValores antes da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2;

	//Esta dando erro pois a fun��o n�o espera receber dois n�meros inteiros.. E sim espera receber dois endere�os de mem�ria para ponteiros do tipo int.
	//Logo devemos enviar o endere�o de mem�ria das variaveis

	TrocaNumeros(&Numero1, &Numero2);

	std::cout << "\nValores depois da troca";
	std::cout << "\nNumero1 = " << Numero1;
	std::cout << "\nNumero2 = " << Numero2 << "\n";

	std::cout << "\nEndere�o de mem�ria de Numero1 = " << &Numero1;
	std::cout << "\nEndere�o de mem�ria de Numero2 = " << &Numero2 << "\n";

	system("PAUSE");
	return 0;
}

void TrocaNumeros(int* Num1, int* Num2)
{

	//Deu diferente pois ponteiro � uma vari�vel e portanto possui endere�o alocado na mem�ria. Ele possui dentro dele o endere�o de mem�ria da vari�vel apontada
	std::cout << "\nEndere�o de mem�ria de Num1 da fun��o  = " << &Num1;
	std::cout << "\nEndere�o de mem�ria de Num2 da fun��o  = " << &Num2;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num1  = " << Num1;
	std::cout << "\nEndere�o de mem�ria contido dentro de Num2  = " << Num2;
	//Se Num1 agora � um ponteiro logo Ter� dentro dele um endere�o de mem�ria. Est� dando erro pois estamos tentando colocar um endere�o de mem�ria dentro de uma vari�vel inteira Temp
	//Lembre o nome de uma vari�vel devolve o que est� dentro dela!
	//Neste caso queremos o valor que Num1 aponta e que neste caso ser� Numero1. Por isso diferentemente das refer�ncias os ponteiros precisam ser desreferenciados
	int Temp{ *Num1 };
	//Agora temp recebe o valor apontado por Num1

	//Aqui o valor apontado por Num1(que ser� Numero1) receber� o valor apontado por Num2
	*Num1 = *Num2;

	//Num2 passa a ser 10. Logo foi trocado
	//Por�m....
	//o valor apontado por Num2 receber�o valor de Temp
	*Num2 = Temp;
	//Temp � uma vari�vel int normal logo n�o pode nem precisa ser desreferenciada


	//tamb�m chamamos isso de PASSAGEM DE ARGUMENTOS PARA A FUN��O POR REFER�NCIA! S� QUE AQUI USANDO PONTEIROS!

}
