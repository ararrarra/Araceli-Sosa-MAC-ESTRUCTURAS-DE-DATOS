#include <stdlib.h>
#include <iostream>

using namespace std;

void generarPares(int numeroGuia, int noPares[10]){
    cout<<"Lista de los primeros 10 numeros pares:"<<endl;
    for(int i=0; i<10; i++){
        numeroGuia += 2;
        noPares[i] = numeroGuia;
        cout<<noPares[i]<<" ";
    }
    cout<<endl;
}

void modificacion(int noCuenta[9], int noPares[10]){
    int n;
    cout<<"Se modificara el espacio: "<<noCuenta[8]<<endl;
    n = noCuenta[8];
    noPares[n] = -1;
}

void impresion(int noPares[10]){
    cout<<"El arreglo final es:"<<endl;
    for(int i=0; i<10; i++)
        cout<<"|"<<noPares[i];
    cout<<"|"<<endl;
}

int main(){
    int numeroGuia = 0, noCuenta[9], noPares[10];
    cout<<"Ingresa tu numero de cuenta separado por espacios: "<<endl;
    for(int i=0; i<9; i++)
        cin>>noCuenta[i];
    generarPares(numeroGuia, noPares);
    modificacion(noCuenta, noPares);
    impresion(noPares);
    return 0;
}