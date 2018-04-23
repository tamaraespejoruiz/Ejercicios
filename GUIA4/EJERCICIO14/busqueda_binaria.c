#include <stdlib.h>

int busqueda_binaria(const int v[], int objetivo, size_t izq, size_t der){
    int centro;
 
    while(izq < der) {
        centro = (izq + der) / 2;

        if(v[centro] < objetivo) {
            izq = centro + 1;
        }
        else if (v[centro] > objetivo) {
            der = centro - 1;
        }
        else if(v[centro] == objetivo) {
            return centro;
        }
    }

    if (v[izq] == objetivo) /* izq == der */
        return izq;
    
    return -1; /* El objetivo no se encuentra en el arreglo. */
}