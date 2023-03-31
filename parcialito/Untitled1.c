#include <stdio.h>
int main(){
int n;
int nactual;
float prom;
int notas[];
int valor;


printf("ingrese cantidad de alumnos:/n");
Scanf("%d",n);
while (nactual<n){
pirintf("ingrese nota de alumno %d", nactual+1);
scanf("%d",notas[nactual]);

}
nactual=0;
prom=0;
while (nactual<n){
valor= valor + notas[nactual];
nactual++;



}
prom= valor/n

prinf("su promedio de la clase es %f",prom );











retunr 0;
}
