#include <stdio.h>#include <stdlib.h>
#include <stdio.h>

//promedia medio mal, hace un aproximado, ni idea x q, lo corrigo mas trade en mi casa
int n;
int nactual ;
float prom;
int notas[1000];
int valor;
int main()  {



printf("ingrese cantidad de alumnos \n" );
scanf("%d",&n);
while (nactual<n){
    nactual++;
printf("ingrese nota de alumno %d \n", nactual++);
nactual =nactual-1;
scanf("%d",&notas[nactual]);


}
nactual=0;
prom=0;
while (nactual<n){
valor= valor + notas[nactual];
nactual++;



}
prom= valor/n;

printf("su promedio de la clase es %f",prom );











return 0;
}
