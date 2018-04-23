#include "limpiar_buffer.h"

void limpiar_buffer(void){
    char c;
    while( (c=getchar()) != '\n' && c != EOF)
    ;
}