#include<stdio.h>


int primos(int n, int m){


	int cd=0;
	for(int i=m;i<=n;i++){ /*Cuando i divide j se divide y si el resultado es 0 se incrementa cd++ uno y se vuelve a dicidir hasta n*/
	for(int j=1;i>=j; j++){
	if(i%j==0){
		cd++; /*Contador de divisores*/
		}
	}
	
if(cd==2){
	printf("%d,",i);
	cd=0; /*este es para que comienze de 0 y j incremente 1*/
}
else cd=0;
}
}

int main(){
int m,n;
printf("Ingresa numero menor:");
scanf("%d",&m);
printf("Ingresa hasta que numero quieres verificar que hay primos: ");
scanf("%d",&n);

if(m<=0){


printf("El numero no es positivo\n");

while( m<=0){

printf("Intentelo \n\n");
printf("Ingresa numero menor\n");
scanf("%d",&m);
}
}
primos(n, m);
	return 0;
}
