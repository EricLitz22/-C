#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 //cria as variaveis a serem usadas
 //para uma média aritimetica a var quantidade é necessaria para o divisor dos numeros
 // soma serve para não alterar o valor da média com os multiplos valores de "valor"
 float media,soma,quantidade,valor;
soma = 0;
quantidade = 0;
    while(valor != 0){//enquanto valor for != 0 coleta diversos valores e incrementa o valor de divisão
        scanf("%f",&valor);// fica dentro de um if para não somar o 0 à quantidade
           if(valor!=0){
		    soma = soma + valor;
            quantidade = quantidade + 1;        
      		 }
     }

 
 if(quantidade>0){ // se quantidade for > 0 ele mostra o valor da média
     media = soma/quantidade;
     printf("%.0f",media);
 }
	return 0;
}
