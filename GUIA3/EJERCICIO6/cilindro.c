#include "cilindro.h"


float cilindro_diametro(float radio){
    
    return radio * 2;
} 

float cilindro_circunferencia(float radio){
  
    return 2 * radio * M_PI;
}

float cilindro_base(float radio){

    return M_PI * radio * radio;
}

float cilindro_volumen(float radio, float altura){

    return M_PI * radio * radio * altura;
}



