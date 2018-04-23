/* Escribir un programa que dado un día del año (1 a 366) ingresado por el usuario, 
 * imprima el día de la semana que le corresponde. Debe asumir que el año comenzó,
 * por ejemplo, un domingo. Por ejemplo: si se ingresa '5', imprime 'jueves',
 *  si se ingresa '10' imprime 'martes', si se ingresa '294' imprime 'sabado'.*/


#include <stdio.h>
#include <stdlib.h>

#define MSJ_USUARIO "Ingrese un número del 1 al 366 para determinar su dia"
#define MSJ_DOMINGO "Domingo"
#define MSJ_LUNES "Lunes"
#define MSJ_MARTES "Martes"
#define MSJ_MIERCOLES "Miercoles"
#define MSJ_JUEVES "Jueves"
#define MSJ_VIERNES "Viernes"
#define MSJ_SABADO "Sabado"

#define MSJ_ERROR_PREFIJO "Error"
#define MSJ_ERROR_NUM_INVALIDO "El número ingresado es invalido."

#define MSJ_ERROR_DEFAULT "Error al ingresar un numero que no este en el intervalo."

int main(void){

    int dia;
    char c;

    printf("%s\n",MSJ_USUARIO);
    if (scanf("%d",&dia) != 1){
        fprintf(stderr,"%s : %s\n",MSJ_ERROR_PREFIJO,MSJ_ERROR_NUM_INVALIDO);
        return EXIT_FAILURE;
    }
    while( (c = getchar()) != '\n' && c != EOF)
    ;

    dia = (dia - 1)% 7; /* El -1 se puso porque sino no cumplia los ejemplos del enunciado*/
    
    
    switch(dia){
        
        case 0:
            printf("%s\n", MSJ_DOMINGO);
            break;
        
        case 1:
            printf("%s\n", MSJ_LUNES);
            break;
        
        case 2:
            printf("%s\n", MSJ_MARTES);
            break;
        
        case 3:
            printf("%s\n", MSJ_MIERCOLES);
            break;
        
        case 4:
            printf("%s\n", MSJ_JUEVES);
            break;
        
        case 5:
            printf("%s\n", MSJ_VIERNES);
            break;
        
        case 6:
            printf("%s\n", MSJ_SABADO);
            break;

        default:
            printf("%s\n", MSJ_ERROR_DEFAULT);
    }

    return EXIT_SUCCESS;

}

