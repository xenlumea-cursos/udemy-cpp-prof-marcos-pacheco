#include <iostream>

struct Ponto3D
{
	int X; int Y; int Z;

	void DesenharPonto3D(Ponto3D Pontos)
	{
		std::cout << "X: " << Pontos.X << " Y: " << Pontos.Y << " Z: " << Pontos.Z << "\n";
	}

};



int main()
{
	Ponto3D PontoC;
	PontoC.X = 1;
	PontoC.Y = 2;
	PontoC.Z = 3;

	PontoC.DesenharPonto3D(PontoC);



	system("pause");
	return 0;
}