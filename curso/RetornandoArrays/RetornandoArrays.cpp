#include<iostream>

//prot�tipos
/*Recebe um array por refer�ncia atrav�s de um ponteiro
Ou seja a vari�vel *Array ir� receber um endere�o de mem�ria de um vetor que ser� enviado para esta fun��o
Duplica Vetor*/
void DuplicaVetor(int* Array, int Tam);

/*Esta fun��o tamb�m recebe um Array via Ponteiro mas tamb�m retorna um ponteiro que neste caso deve ser um ponteiro para int. Logo ser� capaz de devolver um ponteiro
para int ou seja um array. NA realidade vai retornar o endere�o do primeiro elemento do array*/
int* InverteVetor(int* Array, int Tam);

//Mostra o vetor recebido via ponteiro
void MostraVetor(int* Array, int Tam);

int main()
{
	int Numeros[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Tam = sizeof(Numeros) / sizeof(int);
	//chama a fun��o e passa o vetor N�meros para ela
	//O endere�o do primeiro elemento do vetor ser� enviado para Array
	MostraVetor(Numeros, Tam);
	DuplicaVetor(Numeros, Tam);
	MostraVetor(Numeros, Tam);
	//Aqui Mostrar vetor recebe o retorno da fun��o Inverte Vetor
	//E este retorno ser� o endere�o do primeiro elemento do array inventido
	MostraVetor(InverteVetor(Numeros, Tam), Tam);
	system("PAUSE");
	return 0;
}

void DuplicaVetor(int* Array, int Tam)
{
	//fun��o percorre o vetor e duplica os valores
	//do vetor
	for (int i = 0; i < Tam; i++)
	{
		Array[i] = 2 * Array[i];
	}
}


//Esta fun��o recebe um array(na realidade recebe o endere�o do primeiro elemento do array)
//E devolve um array invertido
int* InverteVetor(int* Array, int Tam)
{
	//para inverter o vetor iremos usar um vetor auxiliar
	//ele precisa ser est�tico pois sen�o ao sair da fun��o ele iria desaparecer da mem�ria, e n�o conseguiria ser enviado como retorno da fun��o
	int j = 0;
	static int ArrayInvertido[10];
	//Para conseguir um vetor com valores invertidos faremos
	//Come�a do indice Tam -1 ou seja 10 -1 = 9 e vai at� 0 i>=0
	for (int i = Tam - 1; i >= 0; i--)
	{
		//J vai  de zero at� 9
		//enquanto i vai de 9 at� 0
		/*assim teremos dentro do for todas estas execu��es
		ArrayInvertido[0] = Array[9];
		ArrayInvertido[1] = Array[8];
		ArrayInvertido[2] = Array[7];
		ArrayInvertido[3] = Array[6];
		ArrayInvertido[4] = Array[5];
		ArrayInvertido[5] = Array[4];
		ArrayInvertido[6] = Array[3];
		ArrayInvertido[7] = Array[2];
		ArrayInvertido[8] = Array[1];
		ArrayInvertido[9] = Array[0];
		*/
		ArrayInvertido[j] = Array[i];
		j++;
	}
	//Aqui a fun��o est� retornando o mesmo que o endere�o de mem�ria
	//do primeiro elememento do ArrayInvertido
	return ArrayInvertido;
}

//aqui recebe um vetor via ponteiro e mostra na tela
void MostraVetor(int* Array, int Tam)
{
	//coloca colchete antes do for
	std::cout << "[ ";
	//Coloca os elementos e finaliza o loop
	for (int i = 0; i < Tam; i++)
	{
		std::cout << Array[i] << "  ";
	}
	//e depois coloca ] para fechar o vetor
	std::cout << "] \n\n";
}