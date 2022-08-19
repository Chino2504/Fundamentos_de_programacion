//Codigo para calcular tiempo de certififcacion
//Jorge Moreno
//19 de agosto de 2022
//V1

//Bibliotecas
#include <stdio.h>


int main(void) {
  //Variables
  int Tcert = 60;
  int Tdedicado;
  float Trequerido;

  
  //Ingersar los valores
  printf("Ingresa el tiempo a estudiar en minutos\n");
  scanf("%d", &Tdedicado);

  //Operacion
  Trequerido =Tcert*60/Tdedicado;

  //Imprimir
  printf("Se requieren %f dias para obtener el certificado", Trequerido);
  
  return 0;
}