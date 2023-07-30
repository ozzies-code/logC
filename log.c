#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{   
  float f,x;
  int x_positivo;
  x_positivo = 0;  /*Inicializando a falso*/

    while(!x_positivo) 
    {
      printf("\n Valor de x: ");
      scanf("%f", &x);
      x_positivo = (x > 0.0); /*Asigna verdadero(1) si cumple la condicion */
      
    } 

    f = x*log(x);
   printf(" f(%.1f) = %.3e", x,f);
   printf("\n");
  system("PAUSE");	
  return 0;
}
