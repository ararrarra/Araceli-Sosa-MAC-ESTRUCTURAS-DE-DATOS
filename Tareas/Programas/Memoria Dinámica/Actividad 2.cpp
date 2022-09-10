#include <stdlib.h>
#include <iostream>

using namespace std;

int cuentaEspacios(int noCuenta){
	int n = 0;
	do{
		noCuenta/=10;
		n++;
	} while (noCuenta>0);
	return n;
}

void armarArreglo(int digitos, int* espacios, int noCuenta){
	for (int i = digitos; i > 0; --i){
		espacios[i-1]= noCuenta%10;
		noCuenta/=10;
	}
}

void imprimir(int digitos, int* espacios){
	for (int i = 0; i < digitos; ++i){
		if (espacios[i]>0){
			for (int j = 0; j < espacios[i]; ++j)
				cout<<"|"<<espacios[i];
			cout<<"|"<<endl;
			
		}
		
	}

}

int main(){
	int noCuenta, digitos;
	int* espacios;
	cout<<"Ingresa tu nomero de cuenta: ";
	cin>>noCuenta;
	digitos = cuentaEspacios(noCuenta);
	espacios = (int*)malloc(digitos * sizeof(int));
	armarArreglo(digitos, espacios, noCuenta);
	imprimir(digitos, espacios);
}