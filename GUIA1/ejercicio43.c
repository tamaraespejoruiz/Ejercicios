#include <stdio.h>
#include <stdlib.h>

#define MSJ_KILOMETROS_RECORRIDOS "Ingrese la cantidad de kilómetros recorridos (-1 para terminar):"
#define MSJ_PRECIO_COMBUSTIBLE "Ingrese el precio de combustible por litro:"
#define MSJ_MONTO_TOTAL_COMPRA "Ingrese el monto total de la compra:"
#define MSJ_RENDIMIENTO "Rendimiento (l/km) de este tanque: "

#define MSJ_RENDIMIENTO_PROMEDIO "Rendimiento promedio (l/100km) >> " 
#define MSJ_MEJOR_RENDIMIENTO "Mejor rendimiento (l/100km) >> "
#define MSJ_PEOR_RENDIMIENTO "Peor rendimiento (l/100km) >> " 
#define MSJ_DISTANCIA_TOTAL_RECORRIDA "Distancia total recorrida (km) >> "
#define MSJ_COMBUSTIBLE_TOTAL "Combustible total consumidos (l) >> "
#define MSJ_COSTO_TOTAL "Costo total de su vehiculo ($) >> "


#define MINIMO 0
#define TERMINAR -1

#define MSJ_ERROR_MONTO_INVALIDO "El monto ingresado es invalido."
#define MSJ_ERROR_PREFIJO "Error"

int main(void){
	
	int contador = 0;
	char c;
			
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
	

	
	printf("%s\n", MSJ_KILOMETROS_RECORRIDOS);
	
    if (scanf("%d",&kilometros_recorridos) != 1 || kilometros_recorridos < -1){
		fprintf(stderr,"%s:%s\n",MSJ_ERROR_PREFIJO,MSJ_ERROR_MONTO_INVALIDO);
		return EXIT_FAILURE;
	}
	while( (c = getchar()) != '\n' && c != EOF)
    ;

    while (kilometros_recorridos != TERMINAR){          
		
		contador++;
		printf("%s\n", MSJ_PRECIO_COMBUSTIBLE);
		if (scanf("%f",&precio_combustible_litro) != 1 || precio_combustible_litro < MINIMO){	
			fprintf(stderr,"%s:%s\n", MSJ_ERROR_PREFIJO, MSJ_ERROR_MONTO_INVALIDO);
			return EXIT_FAILURE;
		}
		while( (c = getchar()) != '\n' && c != EOF)
    	;
		
		printf("%s\n", MSJ_MONTO_TOTAL_COMPRA);
		if (scanf("%f",&monto_compra) != 1 || monto_compra < MINIMO){
			fprintf(stderr,"%s:%s\n",MSJ_ERROR_PREFIJO,MSJ_ERROR_MONTO_INVALIDO);
			return EXIT_FAILURE;
		}	
		while( (c = getchar()) != '\n' && c != EOF)
    	;
		
		rendimiento_tanque = ((monto_compra/precio_combustible_litro)/kilometros_recorridos)*100;
		
		if (contador == 1)
			max_rendimiento = min_rendimiento = rendimiento_tanque;		
		if (rendimiento_tanque < min_rendimiento)
			min_rendimiento = rendimiento_tanque;
		else if (rendimiento_tanque > max_rendimiento)
			max_rendimiento = rendimiento_tanque;
	
		printf("%s %.2f\n", MSJ_RENDIMIENTO, rendimiento_tanque);	
		
		suma_rendimiento += rendimiento_tanque;
		promedio_rendimiento = suma_rendimiento/contador;
		
		combustible = monto_compra/precio_combustible_litro;
		total_combustible += combustible;
		
		total_km_recorridos += kilometros_recorridos;
		monto_total += monto_compra;
		
		printf(MSJ_KILOMETROS_RECORRIDOS);
		scanf("%d",&kilometros_recorridos);	
	 }

	printf("%s %.4f\n", MSJ_RENDIMIENTO_PROMEDIO, promedio_rendimiento);
	printf("%s %.2f\n", MSJ_MEJOR_RENDIMIENTO, min_rendimiento);
	printf("%s %.2f\n", MSJ_PEOR_RENDIMIENTO, max_rendimiento);
	printf("%s %d\n", MSJ_DISTANCIA_TOTAL_RECORRIDA, total_km_recorridos);
	printf("%s %.2f\n", MSJ_COMBUSTIBLE_TOTAL, total_combustible);	
	printf("%s %.2f\n", MSJ_COSTO_TOTAL, monto_total);

	return EXIT_SUCCESS;
}






