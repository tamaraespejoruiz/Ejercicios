#ifndef CONVERTIR_H
#define CONVERTIR_H


typedef enum {ST_OK, ST_ERROR } status_t;

status_t convertir_segundos_a_hora(int segundos, int *seg, int *min, int *hora);

#endif