#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define mes 12

int main() {
int total, mayor= 0, menor= 0,total2[mes];
float promedio;
for (int i=0;i<mes;i++){
total2[i]= rand()% 1258+ 100;
total+= total2[i];

}

printf("Cosechas: \n");

for (int i=0;i<mes;i++){
printf("Mes %d: %d toneladas \n",i+1,total2[i]);

}
promedio=total/12;
printf("\n Promedio Anual de toneladas de arroz cosechadas: %f ", promedio);

for(int i=0;i<=mes;i++){

if (total2[i] >= promedio) mayor++;
else menor++;

}

printf ("El mayor numero de toneladas del anio fue: %d en el mes %d\n" , mayor , menor );

return 0;
}
