#include <iostream>
int main2()
{
	int Numero;
	Numero = 0;

	while (Numero <= 50)
	{
		if (Numero % 2 == 0)
		{
			std::cout << Numero << " ";
		}
		Numero++;
	}
	system("PAUSE");
	return 0;
}