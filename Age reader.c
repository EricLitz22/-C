#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,idade[100],maior=0,menor=0;// o menor e o maior s�o declarados para ter a certeza que o valor deles ser� 0
	
	/* o numero entre conchetes � um vetor simboliza quantas vezes ele vai entender aquela vari�vel
	ou quantos caracteres de uma string ele vai entender*/
	
	for(i=0;i<100;i=i+1){// a repeti��o vai at� 100 para simbolizar o numero de pacientes
				scanf("%d",&idade[i]);// o "[i]" simboliza o numero de 0 a 99 que ele vai preencher na var idade[100]
				
		if(i==0){ // para iniciar a logica ele precisa de algum valor para a compara��o que seria o idade[0]
		
			maior=idade[i];
			menor=idade[i];	
			
		}
			if(idade[i]>maior) maior = idade[i];  
			/* e at� a ultima repeti��o os valores ser�o comparados e se for o caso substituidos*/
			if(idade[i]<menor) menor = idade[i];
	}
	 printf("mais novo: %d\nmais velho: %d",menor,maior);// imprime o maior valor encontrado e o menor valor
	return 0;
}
