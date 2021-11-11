#include<stdio.h>

int sumar(int a, int b){
return(a+b);
}
int restar(int a, int b){
return(a-b);
}
int multiplicar(int a, int b){
return (b*a);
}
int main(){
 int a=5;
 int b=10;
 int resultado=0;
	resultado=sumar(a,b);
	printf("El resultado de suma es: %d\n",resultado);
	resultado=restar(a,b);
	printf("El resultado de resta es: %d\n",resultado);
	resultado=multiplicar(a,b);
	printf("El resultado de multiplicacion es: %d\n",resultado);
return 0;
}
