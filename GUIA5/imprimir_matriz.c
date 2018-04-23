/* Escribir un programa que imprima cada uno de los elementos de un arreglo dos dimensional 
utilizando un puntero para acceder a los mismos, en lugar de utilizar subíndices. 
Utilizar el siguiente arreglo y los punteros indicados abajo:

int matriz[3][4] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9,10,11,12}};  
int * ptr;
int (*ptr2vector)[4];
int fila, col;*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int matriz[3][4] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9,10,11,12}};  
    int *ptr = (int *)matriz;
    int (*ptr2vector)[4] = matriz;
    int fila = 3, col = 4;

    size_t i,j;

    for(i=0; i<fila; i++){
        for(j=0; j<col;j++){
            printf("\t%d ", *(*(matriz + i) + j));
        }
        printf("\n");
    }

    for(i=0; i<fila; i++){
        for(j=0; j<col;j++){
            printf("\t%d ", *(*(ptr2vector + i) + j));
        }
        printf("\n");
    }

    for(i=0; i<fila; i++){
        for(j=0; j<col;j++){
            printf("\t%d ", *(ptr + j + i*col));
        }
        printf("\n");
    }


    return EXIT_SUCCESS;
}
