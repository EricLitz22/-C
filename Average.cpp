#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 //cria as variaveis a serem usadas
 //para uma m�dia aritimetica a var quantidade � necessaria para o divisor dos numeros
 // soma serve para n�o alterar o valor da m�dia com os multiplos valores de "valor"
 float media,soma,quantidade,valor;
soma = 0;
quantidade = 0;
    while(valor != 0){//enquanto valor for != 0 coleta diversos valores e incrementa o valor de divis�o
        scanf("%f",&valor);// fica dentro de um if para n�o somar o 0 � quantidade
           if(valor!=0){
		    soma = soma + valor;
            quantidade = quantidade + 1;        
      		 }
     }

 
 if(quantidade>0){ // se quantidade for > 0 ele mostra o valor da m�dia
     media = soma/quantidade;
     printf("%.0f",media);
 }
	return 0;
}
