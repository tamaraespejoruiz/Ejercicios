#include <stdio.h>
#include <stdlib.h>
/* typedef enum{ST_OK,ST_ERROR_DIMENSION_MISMATCH_NO_CUADRADA} status_t; */


/* Carga una matriz con su Identidad*/
/* status_t identidad(double m[][],size_t nfilas, size_t ncols){

    size_t i,j;
    if(nfilas != ncols){

        return ST_ERROR_DIMENSION_MISMATCH_NO_CUADRADA;
	}
        for(i=0; i<nfilas;i++)
            for(j=0;j<ncols;j++)
                m[i][j] = 0;
        for(i=0; i< nfilas; i++)
            m[i][j] = 1;
            return ST_OK;
        
} */


#define MAX 100
#define ELEMENTO 3 
/* Para el ejercicio b */

/* Para cargar una matriz manualmente*/
void cargar_matriz(double b[][MAX], size_t filas, size_t columnas){
	
	int i,j;
	
	for( i = 0; i < filas; i++) /* Recorre filas*/
		for( j = 0; j < columnas; j++) { /* Recorre columnas*/
			printf("Elemento (%d, %d): ",i,j);
			scanf("%lf", &b[i][j]);
		}
}

void imprimir_matriz(double b[][MAX], size_t filas, size_t columnas){
	int i,j;

	for( i = 0; i < filas; i++){
 		for( j = 0; j < columnas; j++) { 
			printf("\t%.2f", b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}

float traza_matriz(double b[][MAX], size_t filas, size_t columnas){
	
	size_t i,j;
	float suma = 0;
	for( i = 0; i < filas; i++) 
		for( j = 0; j < columnas; j++) { 
			if(i == j)
				suma += b[i][j];
		}
		return suma;
	}
	
void suma_componente(double b[][MAX], size_t filas, size_t columnas, int c){
	
	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < columnas; j++) { 
			b[i][j] += c;
		}
	}
}

void multiplicar_por_escalar(double b[][MAX], size_t filas, size_t columnas, int c){
	
	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < columnas; j++) { 
			b[i][j] *= c;
		}
	}
}

void trasponer(double a[][MAX], double a_traspuesta[][MAX],size_t filas, size_t columnas){

	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < columnas; j++) { 
			a_traspuesta[j][i] = a[i][j];
		}
	}
}

float determinante_2x2(double a[][MAX]){
	
	return ((a[0][0] * a[1][1]) - (a[0][1] - a[1][0]));

}
	
float determinante_3x3(double a[][MAX]){

	return (
		(
			a[0][0] * 
			((a[1][1] * a[2][2]) - (a[1][2] - a[2][1])) + 
			((-1) * a[0][1] * ((a[1][0] * a[3][3]) - (a[1][2] - a[2][0]))) + 
			(a[0][2] * ((a[1][0] * a[2][1]) - (a[1][1] - a[2][0])))
		)
	 );
	
}
void multiplicar_dos_matrices(double a[][MAX], double b[][MAX], size_t filas, size_t cols, double resultado[][MAX]){

	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < cols; j++) { 
			;
		}
	}
	
}

float norma_infinito(double a[][MAX])



int main(void){
	
	double matriz[100][100];

	double matriz_transpuesta[100][100];
	
	cargar_matriz(matriz,4,4);
	printf("\n");
	imprimir_matriz(matriz,4,4);
	
	printf("La suma de la traza es:%f\n",traza_matriz(matriz,4,4));
	
	suma_componente(matriz, 4, 4, 10);

	imprimir_matriz(matriz, 4, 4);

	multiplicar_por_escalar(matriz, 4, 4, 10);

	imprimir_matriz(matriz, 4, 4);

	trasponer(matriz,matriz_transpuesta,4,4);

	imprimir_matriz(matriz_transpuesta, 4, 4);

	printf("EL determinante de la matriz es %f:\n", determinante_2x2(matriz));

	printf("Determinante de la matriz 3x3 es %f\n", determinante_3x3(matriz));
	
	return EXIT_SUCCESS;


}
