#ifndef PROBABILIDADES_H
#define PROBABILIDADES_H

#define MSJ_ERROR_IMPRIMIR_DADO_DEFAULT "EL número indicado no representa la cara de un dado."

#define MSJ_TEXTO_DADO_CARA_1 \            
            "|     |\n"\
            "|  *  |\n"\
            "|     |"

#define MSJ_TEXTO_DADO_CARA_2 \
            "|    *|\n"\
            "|     |\n"\
            "|*    |"

#define MSJ_TEXTO_DADO_CARA_3 \
            "|*    |\n"\
            "|  *  |\n"\
            "|    *|"

#define MSJ_TEXTO_DADO_CARA_4 \
            "|*   *|\n" \
            "|     |\n" \
            "|*   *|"

#define MSJ_TEXTO_DADO_CARA_5 \
            "|*   *|\n" \
            "|  *  |\n" \
            "|*   *|"

#define MSJ_TEXTO_DADO_CARA_6 \
            "|*   *|\n" \
            "|*   *|\n" \
            "|*   *|" 

typedef enum {CARA,CECA} moneda_t;


int probabilidad_a(void);
int probabilidad_b(void);
moneda_t probabilidad_c(void);
int tirar_dado(void);
void imprimir_dado(int valor);

#endif