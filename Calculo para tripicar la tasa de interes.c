#include<stdio.h>
#define INTERES1 0.3
#define INTERES2 0.28
#define INTERES3 0.32
int main(){
	
int opcion,n=0;
float deposito,saldo=0,meses=0;

printf("Calcula la mejor tasa de interes para triplicar tu saldo\n\n");
printf("Que cantidad depositara en el banco? : ");
scanf("%f",&deposito);
system("pause");
do{
printf("Elige el banco te interes\n");
printf("1-BANAMEX con tasa de 3.0\n");
printf("2-BANCOMER con tasa de 2.8\n");
printf("3-HSBC con tasa de 3.2\n");
printf("4-Salir\n");
scanf("%d",&opcion);

switch (opcion){
	
case 1:
	printf("BANAMEX con tasa de 3.0\n");
	n=2/INTERES1;
	meses=0.6*12;
	saldo = deposito*(2/INTERES1);
	printf("Los años para triplicar tu ahorro anual es de: %.1d años-%.1f meses\n\n",n,meses);
	printf("El saldo a percibir es de %.2f\n\n\n",saldo);
break;
 
case 2:
	printf("BANCOMER con tasa de 2.8\n");
	
n=2/INTERES2;
	meses=0.14*12; 
	/*meses=n*12;*/
saldo = deposito*(2/INTERES2);
printf("Los años para triplicar tu ahorro anual es de: %.1d años-%.1f meses\n\n",n,meses);
printf("El saldo a percibir es de %.2f\n\n\n",saldo);
break;

case 3:
printf("HSBC con tasa de 3.2%");

n=2/INTERES3;
meses=0.25*12;
saldo = deposito*(2/INTERES3);
printf("Los años para triplicar tu ahorro anual es de: %.1d años-%.1f meses\n\n",n,meses);
printf("El saldo a percibir es de %.2f\n\n\n",saldo);
 
break;
case 4:
return 0;
break;
}

}while( opcion !=1,2,3);

return 0;
}
