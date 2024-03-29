#include <stdio.h>
#include <stdlib.h>

void imprimir(int* matrix){
    printf("Mostrar os valores\n");
    printf("x[0] = %i, x[1] = %i, x[2] = %i \n", matrix[0], matrix[1], matrix[3]);

    printf("&x = %p, x = %p, *x = %i, &x[0] = %p \n", &matrix, matrix, *matrix, &matrix[0]);
}


int main(int argc, char const *argv[])
{
    int x[3];
    x[0] = 112;
    x[1] = 523;
    x[2] = 2032;

    imprimir(x);
    return 0;
}
