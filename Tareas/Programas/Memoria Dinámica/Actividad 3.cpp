#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a, d, inicial = 0;

void generadorPares(int *, int *);
void edicion(int *, int *);
void imprimir(int *, int *);

int main()
{
    int *noCuenta = (int*)malloc(9 * sizeof(int));
    int *noPares = (int*)malloc(10 * sizeof(int));
    printf("Escribe tu numero de cuenta,uno por uno,presiona enter para ir formando la cadena de caracteres,en total deben ser 9:\n");
	for(a=0; a<9; a++);
	{
	    scanf("%d", &noCuenta[a]);
	}
    generarPares(noCuenta, noPares);
    modificacion(noCuenta, noPares);
    impresion(noCuenta, noPares);
    return 0;
}

void generadorPares(int *noCuenta,  int *noPares)
{
    printf("Inicio de funcion generadorPares\n");
    for(a=0; a<10; a++)
    {
        inicial = inicial + 2;
        noPares[a] = inicial;
        printf("%d ", noPares[a]);
    }
    printf("\nFin de funcion\n");
}

void edicion(int *noCuenta, int *noPares)
{
    printf("Inicio de funcion edicion\n");
    printf("%d\n", noCuenta[8]);
    d= noCuenta[8];
    noPares[d] = -1;
    printf("%d\n", d);
    printf("Fin de funcion\n");
}

void imprimir(int *noCuenta, int *noPares);
{
 printf("Inicio de funcion imprimir\n");
    for(a=0; a<10; a++)
    {
        printf("| %d ", noPares[a]);
    }
    printf("| \n");
    printf("Fin de funcion\n");
}

   

