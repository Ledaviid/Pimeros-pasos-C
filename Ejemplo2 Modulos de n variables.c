#include<stdio.h>
int sumar(int a, int b){
return(a+b);
}
int restar(int a, int b){
return(a-b);
}
multiplicar(int a, int b){
return (b*a);
}
int main(){
	
int x;
int y;
do{

printf("Ingresa operando 1 \n");
scanf("%d",&x);
printf("Ingresa operando 2 \n");
scanf("%d",&y);
if(x>=0 && y>=0){
	
	printf("suma: %d\n",sumar(x,y));
	printf("resta: %d\n",restar(x,y));
	printf("multiplicacion: %d\n",multiplicar(x,y));
}

}while(x<=0 && y<=0);
return 1;
}


