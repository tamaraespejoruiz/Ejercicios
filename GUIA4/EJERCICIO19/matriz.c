#include <stdio.h>

#include "matriz.h"

void cargar_matriz(double matriz[][MAX], size_t filas, size_t columnas){
	
	int i,j;
	
	for( i = 0; i < filas; i++) 
		for( j = 0; j < columnas; j++) { 
			printf("Elemento (%d, %d): ",i,j);
			scanf("%lf", &matriz[i][j]);
		}
}

void imprimir_matriz(double matriz[][MAX], size_t filas, size_t columnas){
	int i,j;

	for( i = 0; i < filas; i++){
 		for( j = 0; j < columnas; j++) { 
			printf("\t%.2f", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}


float traza_matriz(double matriz[][MAX], size_t filas, size_t columnas){
	
	size_t i,j;
	float suma = 0;
	for( i = 0; i < filas; i++) 
		for( j = 0; j < columnas; j++) { 
			if(i == j)
				suma += matriz[i][j];
		}
		return suma;
	}
	
void suma_componente(double matriz[][MAX], size_t filas, size_t columnas, int c){
	
	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < columnas; j++) { 
			matriz[i][j] += c;
		}
	}
}

void multiplicar_por_escalar(double matriz[][MAX], size_t filas, size_t columnas, int c){
	
	size_t i,j;
	
	for( i = 0; i < filas; i++) {
		for( j = 0; j < columnas; j++) { 
			matriz[i][j] *= c;
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

float determinante_2x2(double m[][MAX]){
	
	return ((m[0][0] * m[1][1]) - (m[0][1] - m[1][0]));

}
	
float determinante_3x3(double m[][MAX]){

	return (
		(
			m[0][0] * 
			((m[1][1] * m[2][2]) - (m[1][2] - m[2][1])) + 
			((-1) * m[0][1] * ((m[1][0] * m[3][3]) - (m[1][2] - m[2][0]))) + 
			(m[0][2] * ((m[1][0] * m[2][1]) - (m[1][1] - m[2][0])))
		)
	 );
	
}






/* Verificar que funcione*/

float maximo_elemento(double matriz[][MAX]){
	
	size_t i,j;
	double min = matriz[0][0];
	double max;
	for( i = 0; i < filas; i++) {
		for( j = 0; j < cols; j++) {
			if(matriz[i][j] > min){
				max = matriz[i][j];
			}
			else{
				max = min;
			}
		}
	}
	return max;
}
