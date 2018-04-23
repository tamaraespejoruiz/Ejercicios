#include <stdio.h>
#include <stdlib.h>

void funcion(void) {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main(void)
{
    funcion();
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS;
}

/* 

En el primer llamado, x=0; la incrementa a 1, convirtiendose en x = 1 e imprime 1.
En el segundo llamado, como x es una variables estatica, entonces retiene el valor de la ultima vez que se llamó,
entonces comienza con x=1; le suma 1 siendo x = 2 e imprime 2.
En el tercer llamado x = 2, le suma 1 siendo x = 3 e imprime 3.
En el cuarto llamado x = 3, le suma 1 siendo x = 4 e imprime 4.
En el quinto llamado x = 4, le suma 1 siendo x = 5 e imprime 5.

Una vez que la variable x llega al return, muere.
*/
