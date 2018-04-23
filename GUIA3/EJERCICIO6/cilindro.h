#ifndef CILINDRO_H
#define CILINDRO_H 

#ifndef M_PI
#define M_PI 3.14
#endif

float cilindro_diametro(float radio);
float cilindro_circunferencia(float radio);
float cilindro_base(float radio);
float cilindro_volumen(float radio, float altura);

#endif