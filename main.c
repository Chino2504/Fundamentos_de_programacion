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
  scanf("%d", &Tdedicado); //Ingresa una variable a un lugar de almacenamiento
  
  //Operacion
  Trequerido =Tcert*60/Tdedicado; //Hace la operacion necesaria para la conversion de unidades

  //Imprimir
  printf("Se requieren %f dias para obtener el certificado", Trequerido); //Da la oportunidad de colocar un numero el cual va generar una respuesta
  
  return 0;
}