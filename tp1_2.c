#include<stdio.h>

 int cuadrado(int base){
    return (base*base);
 }

 void cuadrado2( int base){
    int potencia;
    potencia=base*base;
    printf("El resultado del cuadrado es:%d \n",potencia);
 }

 void main(){

    int a=9;
    printf("el resultado de la potencia es:%d \n",cuadrado(a));
    cuadrado2(a);

 }