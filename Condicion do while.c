#include <stdio.h>

int main() {
	int edad,n,suma=0,i=0,promedio;
	
printf("ingrese el numero de personas a validar su edad");
scanf("%d",&n);

for(i=1;i<=n;i++){
do{
printf("Ingrese la edad numero %d",i);
scanf("%d",&edad);

}while(edad>100 || edad<0);
suma+=edad;
}

promedio=suma/n;
printf("La edad promedio es:%d",promedio);

	return 0;
}

