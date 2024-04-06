#include <iostream>
#include <array>

void MostrarVetor(int Array[], int TamVetor);
void AlterarVetor(int Array[], int TamVetor);

int main()
{
	int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	int TamanhoVetor = std::size(Vetor);

	std::cout << "\nTamanho Vetor: " << TamanhoVetor;

	std::cout << "\nVetor ORIGINAL";
	//Ent�o aqui seria o mesmo que colocar
	MostrarVetor(&Vetor[0], TamanhoVetor);
	AlterarVetor(&Vetor[0], TamanhoVetor);
	std::cout << "\nVetor ALTERADO?";
	MostrarVetor(&Vetor[0], TamanhoVetor);

	//O NOME DE UM VETOR EM C E C++ � O MESMO QUE &Vetor[0]
	//o vetor foi alterado o que indica que os vetores s�o enviados para as fun��es, por refer�ncia!
	//Mas como funciona?

	//O NOME DE UM VETOR EM C E C++ � O MESMO QUE &Vetor[0]
	//Ou seja, Ao isncrever o nome de um vetor sem os colchetes
	//Na realidade � o mesmo que o endere�o de mem�ria do primeiro elemento do vetor!


	system("PAUSE");
	return 0;
}

//ent�o int Array[] indica que isso na realidade � um ponteiro
//podemos inclusive substituir por
void MostrarVetor(int* Ptr_Array, int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		std::cout << "- " << Ptr_Array[i] << " -";
	}
	std::cout << "\n\n";
}
void AlterarVetor(int* Ptr_Array, int TamVetor);
void AlterarVetor(int* Ptr_Array, int TamVetor)
{
	for (int i = 0; i < TamVetor; i++)
	{
		Ptr_Array[i] = Ptr_Array[i] * 2;
	}

	//Ptr_Array[i] �  mesmo que *(Ptr_Array + i)
	//Mas para entender isso � preciso estudar o assunto da pr�xima aula
	//Aritm�tica de ponteiros!

	//Aqui n�o colocamos nada na tela
	//a fun��o recebeu um array Vetor que foi recebido por Array[]
	//A pergunta � Array recebeu uma c�pia de todo o vetor ou Recebeu uma refer�ncia de Vetor?
	//Se reecebeu uma c�pia estre trecho de c�digo Array[i] = Array[2] * 2;
	/*N�o ir� mudar o Vetor original int Vetor[] = { 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10 };
	Assim Vetor continuaria sendo 1,2,3,4,5,6,7,8,9,10
	Mas se o Vetor estiver sendo enviado por refer�ncia o valor ser� mudado
	pois Array ter� o endere�o de Vetor e conseguir� mudar seus valores
	*/
}