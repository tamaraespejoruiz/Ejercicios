/* Escribir un programa que dado un día del año (1 a 366) ingresado por el usuario, 
 * imprima el día de la semana que le corresponde. Debe asumir que el año comenzó,
 * por ejemplo, un domingo. Por ejemplo: si se ingresa '5', imprime 'jueves',
 *  si se ingresa '10' imprime 'martes', si se ingresa '294' imprime 'sabado'.*/


#include <stdio.h>

#define MSJ_USUARIO "Ingrese un número del 1 al 366 para determinar su dia\n"
#define MSJ_DOMINGO "El dia es domingo"
#define MSJ_LUNES "El dia es lunes"
#define MSJ_MARTES "El dia es martes\n"
#define MSJ_MIERCOLES "El dia es miercoles"
#define MSJ_JUEVES "El dia es jueves"
#define MSJ_VIERNES "El dia es viernes"
#define MSJ_SABADO "El dia es sabado"

int main(void){

    int dia;

    printf(MSJ_USUARIO);
    scanf("%d",&dia);

    dia = (dia - 1)% 7; /* El -1 se puso porque sino no cumplia los ejemplos del enunciado*/
    printf("%d",dia);
    switch(dia){

        case 0:
        printf(MSJ_DOMINGO);
        break;
        
        case 1:
        printf(MSJ_LUNES);
        break;
        
        case 2:
        printf(MSJ_MARTES);
        break;
        
        case 3:
        printf(MSJ_MIERCOLES);
        break;
        
        case 4:
        printf(MSJ_JUEVES);
        break;
        
        case 5:
        printf(MSJ_VIERNES);
        break;
        
        case 6:
        puts(MSJ_SABADO);
        break;

        default:
        printf("Error al ingresar un numero que no este en el intervalo\n");
    }

    return 0;

}

