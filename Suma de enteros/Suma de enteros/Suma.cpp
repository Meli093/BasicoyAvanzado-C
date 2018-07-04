#include<iostream>//permite realizar entradas y salidas del entero
int main() {
//declarmos nuestras variables
	int numero1 = 0;
	int numero2 = 0;
	int suma = 0;
	std::cout << "Escriba el numero entero";
	std::cin >> numero1;
	std::cout << "Escriba el segundo entero";
	std::cin >> numero2;
	suma = numero1 + numero2;//es donde se almacena los resultados.
	std::cout << "el resultado es :" << suma << std::endl;//muestra el resultado


}


