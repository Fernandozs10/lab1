// raro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
	int x;
	int y;
	std::cout << "ingrese el valor de la variable x : ";
	std::cin >> x;
	std::cout << "ingresa el valor de la variable y : ";
	std::cin >> y;
	int z = x + y;
	int r = x - y;
	int a = x * y;
	std::cout << "la suma es " << z << std::endl;
	std::cout << "la resta es " << r << std::endl;
	std::cout << "la multiplicacion es " << a << std::endl;
	return 0;
}