/* imprimir matriz */

#include <stdio.h>

#define TALLA 3

int main(void){
	float a[TALLA][TALLA], b[TALLA][TALLA];
	float s[TALLA][TALLA], p[TALLA][TALLA];
	int i,j,k;

/* Lectura de la matriz A*/
	for(i=0;i<TALLA;i++)
		for(j=0;j<TALLA;j++) {

			printf("Elemento (%d, %d): ",i,j);
			scanf("%f", &a[i][j]);
			}

/* Lectura de la matriz b */

	for(i=0;i<TALLA;i++)
		for(j=0;j<TALLA;j++) {
			printf("Elemento (%d, %d): ",i,j);
			scanf("%f", &b[i][j]);
		}

/* Calculo de la suma*/

	for(i=0;i<TALLA;i++)
		for(j=0;j<TALLA;j++)
			s[i][j] =a[i][j] +b[i][j];
/*Calculo del producto*/

	for(i=0;i<TALLA;i++)
		for(j=0;j<TALLA;j++) {
			p[i][j] =0.0;

		for(k=0;k<TALLA;k++)
		p[i][j] +=a[i][k] *b[k][j];
		}
/*Impresi ́on del resultado de la suma*/

	printf("Suma\n");

	for(i=0;i<TALLA;i++) {
	for(j=0;j<TALLA;j++)
		printf("%8.3f",s[i][j]);
		printf("\n");
		}
/*Impresi ́on del resultado del producto*/

	printf("Producto\n");
	for(i=0;i<TALLA;i++) {
		for(j=0;j<TALLA;j++)
		printf("%8.3f",p[i][j]);
		printf("\n");
		}
	return 0;
}
