#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,maior,num;
		n=0; // n serve como um contador de algarismo como num vetor
		i = 1; // i é para tornar a condição do while verdadeira
	while(i > 0){
		scanf("%d",&num); // pega o numero digitado
			if(num != 0 && n==0) maior = num; // faz o primeiro numero de comparação para achar um maior
			else if(num>maior && n>1) maior = num;	// se o numero for > o comparativo ele sobrepõe o outro
			else if(num == 0) i=0; // se o num = 0 ele torna a condição do while falsa
		n = n + 1;
			
	}
		printf("%d",maior);
	
	
	return 0;
}
