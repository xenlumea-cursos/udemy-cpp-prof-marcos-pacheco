#include <iostream>
#include <string>
/*Crie um programa que receba o nome do aluno, suas 5 notas e depois mostre a m�dia destas notas*/

int main()
{
	//Seria interessante uma vari�vel que voc� pudesse declarar e ela tivesse compartimentos que armazenariam valores!

	//Agora foi criada uma vari�vel de nome Notas com 5 compartimentos
	//indexados a partir do zero [0] [1] [2] [3] [4]
	//acess�veis por um �nico nome Notas[�ndice]
	//Devem ter todos os compartimentos o mesmo tipo de dados e por isso ela � considerada uma vari�vel composta (v�rios locais de armazenamento) e homog�nea por aceitas apenas um tipo de dado dentro de cada comportimento.
	//Voc� j� pode iniciar os valores j� na declara��o
	//Este � o estilo herdado da linguagem C
	//Agora C++
	//Por que este f?
	//PAra indicar que os n�meros s�o float
	//pois n�mero sem este f s�o considerados double e neste caso voc� estaria colocando double dentro do float
	//mas lembre que float � menor que double e com isso poderia ocorrer perda de dados
	float Notas[5]{ 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
	//importante inicializar vari�veis contadoras e acumuladoras
	//muitos erros ocorrem!
	float Media, Soma{ 0.0 };
	std::string NomeAluno;

	std::cout << "\nDigite o nome do Aluno: ";
	std::cin >> NomeAluno;

	//esta parte aqui est� muito repetitiva, n�o pode ser melhorada?
	//E se [indice] puder ser colocado como vari�vel
	//ex: [i]
	//esta vari�vel come�aria com 0 e iria at� 4
	//que comando podemos usar?
	//for!!!

	//Neste for o i vai de zero at� 4. Percorre exatamente os �ndices do vetor Notas
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "\nDigite a nota" << (i + 1) << ": ";
		std::cin >> Notas[i];
		//precisamos de uma vari�vel que acumule a soma das notas!
		Soma = Soma + Notas[i];
		system("CLS");
	}

	//soma das notas dividido pelo n�mero de notas!
	Media = Soma / 5;

	std::cout << "\nA Media das notas do aluno foi: " << Media << "\n";
	//E se fossem 10 notas?

	system("PAUSE");
	return 0;
}
