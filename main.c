
#include <stdio.h>
#include <stdlib.h>

int n;
int nactual ;
float prom;
int valor;
int valortemp;
int main()  {



printf("ingrese cantidad de alumnos \n" );
scanf("%d",&n);
printf("cuando termine de cargar las notas ingrese -1 \n" );
valortemp=0;
while (valortemp!=-1){

printf("ingrese nota de alumno %d \n", nactual++);
scanf("%d",&valortemp);
valor= valortemp + valor;

}
nactual=0;
prom=0;

prom= valor/n;

printf("su promedio de la clase es %f",prom );










return 0;
}