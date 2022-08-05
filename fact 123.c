#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int nb,i,fact;
	fact=1
	printf("entrer un nombre nb:\n");
	scanf("%d",&nb);
	if(nb<0)
	printf("op-impossible");
	else 
      for(i=1;i<=nb;i++){
      	fact=fact*i;
      	printf("la valeur de factorielle est :%d",fact);
}
		return 0;
}
