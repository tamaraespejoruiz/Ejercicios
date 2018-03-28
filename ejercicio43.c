#include <stdio.h>
#include <stdlib.h>

#define MSJ_KILOMETROS_RECORRIDOS "Ingrese la cantidad de kilómetros recorridos (-1 para terminar):\n"
#define MSJ_PRECIO_COMBUSTIBLE "Ingrese el precio de combustible por litro:\n"
#define MSJ_MONTO_TOTAL_COMPRA "Ingrese el monto total de la compra:\n"
#define MSJ_RENDIMIENTO "Rendimiento (l/km) de este tanque:%.2f\n"

#define MSJ_RENDIMIENTO_PROMEDIO "Rendimiento promedio (l/100km) >> %.4f\n" 
#define MSJ_MEJOR_RENDIMIENTO "Mejor rendimiento (l/100km) >> %.2f\n"
#define MSJ_PEOR_RENDIMIENTO "Peor rendimiento (l/100km) >> %.2f\n" 
#define MSJ_DISTANCIA_TOTAL_RECORRIDA "Distancia total recorrida (km) >> %d\n"
#define MSJ_COMBUSTIBLE_TOTAL "Combustible total consumidos (l) >> %.2f\n"
#define MSJ_COSTO_TOTAL "Costo total de su vehiculo ($) >> %.2f\n"


#define MINIMO 0
#define TERMINAR -1



#define MSJ_ERROR_MONTO_INVALIDO "El monto ingresado es invalido"
#define MSJ_ERROR_PREFIJO "Error:"

int main(void){
	
	int contador = 0;
			
	int kilometros_recorridos = 0;
    float precio_combustible_litro = 0;
    float monto_compra = 0;
	
	float promedio_rendimiento = 0;
	float suma_rendimiento = 0;

	float rendimiento_tanque = 0;
	float max_rendimiento = 0;
	float min_rendimiento = 0;
	
	int total_km_recorridos = 0;
	float total_combustible = 0;
	float monto_total = 0;

	float combustible = 0;
	

	
	printf(MSJ_KILOMETROS_RECORRIDOS);
	
    if (scanf("%d",&kilometros_recorridos) != 1 || kilometros_recorridos < TERMINAR){
		fprintf(stderr,"%s:%s\n",MSJ_ERROR_PREFIJO,MSJ_ERROR_MONTO_INVALIDO);
		return EXIT_FAILURE;
	}
    while (kilometros_recorridos != TERMINAR){          
		
		contador++;
		printf(MSJ_PRECIO_COMBUSTIBLE);
		if (scanf("%f",&precio_combustible_litro) != 1 || precio_combustible_litro < MINIMO){	
			fprintf(stderr,"%s:%s\n",MSJ_ERROR_PREFIJO,MSJ_ERROR_MONTO_INVALIDO);
			return EXIT_FAILURE;
		}
		else 
		printf(MSJ_MONTO_TOTAL_COMPRA);
		if (scanf("%f",&monto_compra) != 1 || monto_compra < MINIMO){
			fprintf(stderr,"%s:%s\n",MSJ_ERROR_PREFIJO,MSJ_ERROR_MONTO_INVALIDO);
			return EXIT_FAILURE;
		}
		else 	
			rendimiento_tanque = ((monto_compra/precio_combustible_litro)/kilometros_recorridos)*100;
		
			if (contador == 1)
				max_rendimiento = min_rendimiento = rendimiento_tanque;		
			if (rendimiento_tanque < min_rendimiento)
				min_rendimiento = rendimiento_tanque;
			else if (rendimiento_tanque > max_rendimiento)
				max_rendimiento = rendimiento_tanque;
	
		printf(MSJ_RENDIMIENTO,rendimiento_tanque);	
		
		suma_rendimiento += rendimiento_tanque;
		promedio_rendimiento = suma_rendimiento/contador;
		
		combustible = monto_compra/precio_combustible_litro;
		total_combustible += combustible;
		
		total_km_recorridos += kilometros_recorridos;
		monto_total += monto_compra;
		
		printf(MSJ_KILOMETROS_RECORRIDOS);
		scanf("%d",&kilometros_recorridos);	
	 }

	printf(MSJ_RENDIMIENTO_PROMEDIO, promedio_rendimiento);
	printf(MSJ_MEJOR_RENDIMIENTO, min_rendimiento);
	printf(MSJ_PEOR_RENDIMIENTO, max_rendimiento);
	printf(MSJ_DISTANCIA_TOTAL_RECORRIDA, total_km_recorridos);
	printf(MSJ_COMBUSTIBLE_TOTAL, total_combustible);	
	printf(MSJ_COSTO_TOTAL, monto_total);

	return EXIT_SUCCESS;
}






