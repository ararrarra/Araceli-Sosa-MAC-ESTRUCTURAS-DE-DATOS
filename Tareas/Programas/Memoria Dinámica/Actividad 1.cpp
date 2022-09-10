#include <stdlib.h>
#include <iostream>

using namespace std;

struct datos{
	char nombre [25];
	float edad, calificacion;
};

void leerDatos(int n, struct datos* alumno){
	for (int i = 0; i < n; ++i){
		cout<<"Alumno "<<i+1<<endl;
		cout<<"Nombre: ";
		cin>>alumno[i].nombre;
		cout<<"Edad: ";
		cin>>alumno[i].edad;
		cout<<"Calificacion: ";
		cin>>alumno[i].calificacion;
	}
}

void promedioEdad(float n, struct datos* alumno){
	float x = 0;
	for (int i = 0; i < n; ++i)
		x += alumno[i].edad;
	cout<<"El promedio de edad del grupo es :"<<x/n<<endl;
}

void promedioCalificaciones(float n, struct datos* alumno){
	float x = 0;
	for (int i = 0; i < n; ++i)
		x += alumno[i].calificacion;
	cout<<"El promedio de calificaciones del grupo es :"<<x/n<<endl;	
}

void listaAlumnos(float n, struct datos* alumno){
	cout<<"Lista de alumnos en orden inverso"<<endl;
	for (int i = n; i > 0; --i)
		cout<<alumno[i-1].nombre<<endl;
}

int main(){
	float n;
	struct datos* alumno;
	cout<<"Ingrese numero de alumnos: ";
	cin>>n;
	alumno = (datos*)malloc(n * sizeof(datos));
	leerDatos(n, alumno);
	promedioEdad(n, alumno);
	promedioCalificaciones(n, alumno);
	listaAlumnos(n, alumno);


}