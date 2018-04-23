#ifndef EJERCICIO5_H
#define EJERCICIO5_H

#define MSJ_INGRESO "Ingrese la temperatura del cuerpo celeste en Kelvin:"

#define TEMP_MIN 1700
#define TEMP_MAX 50000

#define LIMITE_TEMP_CLASE_M 3200
#define LIMITE_TEMP_CLASE_K 4600
#define LIMITE_TEMP_CLASE_G 5700
#define LIMITE_TEMP_CLASE_F 7100
#define LIMITE_TEMP_CLASE_A 9600
#define LIMITE_TEMP_CLASE_B 28000
#define LIMITE_TEMP_CLASE_O 50000


#define MSJ_ERROR_PREFIJO "Error"
#define MSJ_ERROR_NUM_INVALIDO "El número ingresado es invalido"

#define MSJ_AZUL "Azul"
#define MSJ_BLANCO_AZULADO "Blanco azulado"
#define MSJ_BLANCO "Blanco"
#define MSJ_BLANCO_AMARILLENTO "Blanco amarillento"
#define MSJ_AMARILLO "Amarillo"
#define MSJ_NARANJA "Naranja"
#define MSJ_ROJO "Rojo"

#define MSJ_DEFAULT "El caso seleccionado no existe."

typedef enum {CLASE_M, CLASE_K, CLASE_G, CLASE_F, CLASE_A, CLASE_B, CLASE_O} espectral_t;

#endif


