//if sirve para comparar 2 variables sin son iguales,desiguales o diferente.

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
	int num1 = 0;
	int num2 = 0;


	cout << "Escriba 2 numeros para comparar";//pideo los datos.
	cin>> num1 >> num2;//le nuestras variables.
	if (num1 == num2)//== igulando los mismo valores.
		cout << num1 << "==" << num2 << endl;
	if (num1 != num2)
		cout << num1 << "!=" << num2 << endl;
	if (num1 < num2)
		cout << num1 << "<" << num2 << endl;
	if (num1 > num2)
		cout << num1 << ">" << num2 << endl;
	if (num1 <= num2)
		cout << num1 << "<=" << num2 << endl;
	if (num1 >= num2)
		cout << num1 << "=" << num2 << endl;
   
}