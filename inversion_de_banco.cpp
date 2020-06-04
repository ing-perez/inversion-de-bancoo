

#include<iostream>
using namespace std;



int main() {
	float cantida;
	float i;
	float total;
	cout << "ingrese la cantida a invertir" << endl;
	cin >> cantida;
	total = 0;
	for (i=1;i<=12;i++) {
		cantida = cantida*1.02;
		total = total+cantida;
		cout << "mes" << (i) << ":" << cantida << endl;
	}
	cout << " cantida de dinero despues de un año :" << total << endl;
	return 0;
}

