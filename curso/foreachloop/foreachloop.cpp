#include <iostream>
/*Array 1998, 2011, 2014, 2017, 2020.
Percorra(Itere) por este array utilizando o conceito de for each e coloque os valores na tela.
*/
int main2()
{
	int Anos[]{ 1998,2011,2014,2017,2020 };
	//Ano � a vari�vel que vai receber a cada passada
	//do for cada valor contido em Anos
	//primeiro Ano recebe o primeiro indice de Anos que � 1998
	// depois recebe 2011, 2014, 2017 e 2020
	//� como um for normal mas ele percorre sem �ndice e de forma automatica
	for (auto Ano : Anos)
	{
		std::cout << Ano << "\n";
	}

	system("PAUSE");
	return 0;
}
