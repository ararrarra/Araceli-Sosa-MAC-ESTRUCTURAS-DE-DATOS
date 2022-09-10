#include <stdlib.h>
#include <iostream>

using namespace std;

double factorial(double n){
	if (n>1){
		return n*factorial(n-1);
	}else {
		return 1;
	}

}

int main(){
	int entrada;
	double resultado;
	cout<<"Ingrese un numero: ";
	cin>>entrada;
	resultado = factorial(entrada);
	cout<<"El factorial del numero es: "<<resultado<<endl;
}