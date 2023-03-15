#include <stdio.h>
#include <stdlib.h>
// Variables : No tienen limite, siempre se escriben en minuscula, debe empezar con un caracter, no signos (Solo permite _);
// Constante : Similar a la variable pero no puede ser modificada durante su ejecucion, se definen antes del main;
// Contador : Incrementa su valor de forma constante
// Acumulador : Suma su valor de forma NO constante
// Camel Case : Empezar la segunda palabra de la variable con mayuscula o guion bajo (nombreApellido o nombre_apellido);
// Float : Pára numeros con decimal (2.14);
// Int : Para numeros enteros (3);
// %f : Para mostrar un float;
// %i : Para mostrar un int;
// %.(num)f : Para decirle al numero cuantos decimales mostrar (%.3f = Muetra 3 decimales);
// %.0f : Redondea el decimal;
// scanf : Se usa para leer datos;
// Tipos de dato:(Imagen "tipos de dato")
// 1 "=" para asignacion, para comparacion son 2 "=", if(num1==num2)
// Operadores Aritmeticos (Imagen "Operadores aritmeticos")
// Operadores Logicos: "&& || ! |= ==";
// Sizeof : Lee el tamaño de la variable en Bytes
// For = "Para" Se utiliza cuando se sabe la cantidad de veces que se tiene que ejecutar
// While = "Mientras" Se utiliza para ejecutar mientras se cumpla una condicion

#define pi = 3.14 // Otra forma de definir una constante

const int num9 = 10; // No se puede cambiar;

int main()
{
    int numero = 4; // Tipo de dato y nombre de variable Tipo de dato-Declaracion-Asignacion;
    int numerito = 2;

    int num,num2; // Mismo tipo de dato;
    num = 10; // Asignacion;
    num2 = 12; // Asignacion;

    int num3 = 5, num4 = 6; // Mismo tipo de dato;

    float num5 = 2.6; // Numero con decimal;

    numero = numerito; // El valor de la izquierda toma el valor de la derecha

    printf("Hello World\n");
    printf("El numero es %.1f y el otro es %i \n", num5, num3); // Mostrar los numeros;


    int num6; // Declaracion de variable;
    int num7; // Declaracion de variable;
    int num8; // Declaracion de variable;

    printf("Ingrese un dato\n"); // Solicitar Un dato;
    scanf("%i", &num6); // Leer el dato y almacenarlo;

    printf("Ingrese un dato\n"); // Solicitar Un dato;
    scanf("%i", &num7);  // Leer el dato y almacenarlo;

    printf("Ingrese un dato\n"); // Solicitar Un dato;
    scanf("%i", &num8);  // Leer el dato y almacenarlo;

    printf("Los numeros ingresados son %i , %i , %i \n", num6, num7, num8); // Mostrar los datos;

    int tamanio = sizeof(num2); // Lee el tamaño de la variable en Bytes;
    printf("El tamaño es de %i Bytes \n", tamanio); // Mostramos el tamaño en Bytes;

    int i; // i se utiliza para contador

    for(i=0; i<10; i++) { // Declaracion (i = 0), Hasta donde llega (i<10) y accion (i++)
            printf("a\n"); // Se repite 10 veces.
            }

     int nota= 0;
     int suma= 0; //Acumulador

     for (i=0; i<3;i++){ // Uso del acumulador

        printf ("Ingrese su nota\n");
        scanf ("%i", &nota);
        suma= suma + nota;
        printf ("La suma de las notas es: %i ",suma);
     }
     i=0;
     while (i<5)
     {
        printf("a\n");
        i++;
     }
    return 0;
}
