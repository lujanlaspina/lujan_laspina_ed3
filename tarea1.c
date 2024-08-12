#include <stdio.h>

int main() {
    int a, b, suma; //declara tres variables enteras: a y b para almacenar los números ingresados, y suma para almacenar el resultado de la suma.

    // Solicitar al usuario que ingrese el primer número
    printf("Ingrese el primer número (a): ");//printf se usa para mostrar un mensaje al usuario.

    scanf("%d", &a);//scanf se usa para leer la entrada del usuario y almacenarla en las variables a

    // Solicitar al usuario que ingrese el segundo número
    printf("Ingrese el segundo número (b): ");
    scanf("%d", &b);

    // Calcular la suma de los dos números
    suma = a + b;

    // Mostrar el resultado
    printf("La suma de %d y %d es %d\n", a, b, suma);

    return 0;
}
