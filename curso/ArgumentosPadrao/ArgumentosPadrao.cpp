#include <iostream>

void Coordenadas(int x, int y, int z = 1);


int main()
{
	Coordenadas(3, 2);
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;
	std::cout << "(" << x << " - " << y << " - " << z << ")";
}
