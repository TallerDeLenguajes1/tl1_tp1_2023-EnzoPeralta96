#include<stdio.h>

int cuadrado(int base){
    return (base*base);
}

void cuadrado_alternativo( int base){
    int potencia;
    potencia=base*base;
    printf("El resultado del cuadrado es:%d Version 2\n",potencia);
}

void mostrarDireccion(int *variableAmostrar){
      printf("La direccion de memoria de la varible es:%p\n", variableAmostrar);
      printf("El contenido de la variable es:%d \n",*variableAmostrar);
}

void invertir(int *a, int *b){
   int  auxiliar;

   auxiliar = *a;
   (*a) = (*b);
   *b = auxiliar;

   printf("Valores invertidos a:%d y b:%d \n", *a,*b);

}
void orden (int *a, int *b){
   int auxiliar;
   printf("Valores ordemados: ");
   if( (*a) < (*b) ){
      printf("a:%d y b:%d \n",*a,*b);
   }else
   {
      auxiliar = *a;
      (*a) = (*b);
      *b = auxiliar;
      printf("a:%d y b:%d \n",*a,*b);
   }

}
void main(){

   int a,b;

   printf("Ingrese el valor de a:");
   scanf("%d",&a);
   printf("ingrese el valor de b:");
   scanf("%d",&b);

   printf("Primera variable\n");
      printf("el cuadrado de a es:%d - Version1 \n",cuadrado(a));
      cuadrado_alternativo(a);
      mostrarDireccion(&a);

   printf("Segunda variable\n");
      printf("El cuadrado de b es:%d - Version1\n", cuadrado(b));
      cuadrado_alternativo(b);
      mostrarDireccion(&b);

   orden(&a,&b);
   invertir(&a,&b);
  

}