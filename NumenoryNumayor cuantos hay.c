#include<stdio.h>
/*Escribe un programa que lea dos numeros y muestre por pantalla todos los numero comprendidos entre esos dos numeros dados*/

int main(){

int a,b, i=0;

printf("Introduce un numero: ");
scanf("%d",&a);

do{
		
printf("Introduce un numero mayor al anterior");
scanf("%d",&b);

for(i=a+1; i<b; i++) {

printf("%d\n",i);
}
system("pause");
}
while(b<a);

return 0;
	
}
