#include<stdio.h>

int main(){
    printf ("hola mundo!\n");
    int numeroEntero = 5 , *puntNumero;
    puntNumero = &numeroEntero;
    printf("El contenido del puntero es:%d\n",*puntNumero);
    printf("La direccion de memoria almacenada es:%p\n",puntNumero);
    printf("La direccion de memoria de la variable numeroEntero es:%p\n",&numeroEntero);
    printf("La direccion de memoria del puntero es:%p\n",&puntNumero);
    printf("El tamaño de memoria utilizado por el puntero es:%d byte\n", sizeof(int));
    return 0;
}