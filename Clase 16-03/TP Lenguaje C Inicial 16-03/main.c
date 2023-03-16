#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*               (Ejercicio 1)
   int capital;
   float intereses = 0.02;
   float ganancia;
   printf ("Ingrese su dinero a invertir ");
   scanf ("%i", &capital);
   ganancia=((float)capital*intereses);
   printf ("Su ganancia es de: $%.0f  ",ganancia); */

                    //(Ejercicio 2)

   float descuento=0.15,total;
   int precio;
   printf ("Ingrese el monto de su compra:\n");
   scanf("%i", &precio);
   total=((float)precio*descuento);
   return 0;
}
