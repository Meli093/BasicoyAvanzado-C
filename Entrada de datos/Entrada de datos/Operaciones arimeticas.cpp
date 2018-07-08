#include <iostream>
using namespace std;

int main() {
	int n1, n2, suma = 0, resta = 0, multi = 0, divi = 0;
	cout << "digite un numero" << n1;
	cout << "digite otro numero" << n2;
	suma = n1 + 2;
	resta = n1 - n2;
	multi = n1 * n2;
	divi = n1 / n2;
	cout << "\n la suma es: " << suma << endl;
	cout << "\n la resta es: " << resta << endl;
	cout << "\n la multiplicacion es: " << multi << endl;
	cout << "\n la division es: " << divi << endl;

	return 0;
}