#include <stdio.h>
#include <stdlib.h>

#include "ejercicio19.h"
#include "matriz.h"



void multiplicar_dos_matrices(double a[][MAX], double b[][MAX], size_t filas, size_t cols, double resultado[][MAX]){

	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < cols; j++) { 
			;
		}
	}
	
}

float norma_infinito(double a[][MAX]), size_t filas, size_t columnas)
 
			 


int main(void){
	
	double matriz[100][100];

	double matriz_transpuesta[100][100];
	
	cargar_matriz(matriz,4,4);
	printf("\n");
	imprimir_matriz(matriz,4,4);
	
	printf("%s :%f\n", MSJ_SUMA_DE_LA_TRAZA, traza_matriz(matriz,4,4));
	
	suma_componente(matriz, 4, 4, 10);

	imprimir_matriz(matriz, 4, 4);

	multiplicar_por_escalar(matriz, 4, 4, 10);

	imprimir_matriz(matriz, 4, 4);

	trasponer(matriz,matriz_transpuesta,4,4);

	imprimir_matriz(matriz_transpuesta, 4, 4);

	printf("%s: %f\n", MSJ_DETERMINANTE_2X2, determinante_2x2(matriz));

	printf("%s: %f\n", MSJ_DETERMINANTE_3X3, determinante_3x3(matriz));
	
	return EXIT_SUCCESS;


}
