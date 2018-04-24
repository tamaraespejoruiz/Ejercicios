#ifndef MATRIZ_H
#define MATRIZ_H

void cargar_matriz(double matriz[][MAX], size_t filas, size_t columnas);

void imprimir_matriz(double matriz[][MAX], size_t filas, size_t columnas);

float traza_matriz(double matriz[][MAX], size_t filas, size_t columnas);

void suma_componente(double matriz[][MAX], size_t filas, size_t columnas, int c);

void multiplicar_por_escalar(double matriz[][MAX], size_t filas, size_t columnas, int c);

void trasponer(double a[][MAX], double a_traspuesta[][MAX],size_t filas, size_t columnas);

float determinante_2x2(double matriz[][MAX]);

float determinante_2x2(double m[][MAX]);

float determinante_3x3(double m[][MAX]);

float maximo_elemento(double matriz[][MAX]);

/* FUNCIONES QUE FALTAN HACER:
 
 
status_t semi_definida() ;
 
void multiplicar_dos_matrices(double a[][MAX], double b[][MAX], size_t filas, size_t cols, double resultado[][MAX]); 

float norma_menos_1(double a[][MAX]), size_t filas, size_t columnas)

float norma_infinito(double a[][MAX]), size_t filas, size_t columnas);  
 * */



#endef
