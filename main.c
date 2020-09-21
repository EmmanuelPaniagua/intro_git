#include <stdio.h>

int main()
{
    char nombre[50];
    unsigned int edad;

    printf("Hola mundo\n");
    printf("\nIngresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("\nHola %s",nombre);
    printf("\nIngresa tu edad: ");
    scanf("%u", &edad);
    printf("\nVas a cumplir %u",edad+1);
    return 0;
}
