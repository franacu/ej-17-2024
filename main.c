#include <stdio.h>
#include "helper.h"

int main()
{
    char c1[]=("hola ");
    char c2[]=("mundo");
    char resultado = interseccion(c1, c2);
    if (resultado != '\0') {
        printf("%c\n", resultado);
    } else {
        printf("No hay intersección.\n");
    }
    return 0;
}
