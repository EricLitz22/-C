#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i,num,result; // para aumentar o tamanho dos numeros � necessario mudar o tipo de variavel de "result"
		result = 1; // result � =1 pq 0! � 1 e tbm qualquer numero multiplicado por 0 � 0
			scanf("%d",&num); // pega o numero a ser usado
	
	/* esse "for � feito utilizando um loop de repedi��o a condi��o de existencia dele
	 nunca ser� falsa pq no final dele h� um outro fator 
	que vai subtrair o i 
	for(int i=0; i<3; i= i+1){ i = i - 1 } ficando preso por esse loop*/
	
	for(i=0;i<3;i = i+1){
		if(num>0){ // por estar preso no loop ele far� a opera��o at� "num" ser 0
			result = result * num;
			num = num - 1;
		}
		else{ // quando num for 0 ele imprime o valor do fatorial e faz a condi��o de existencia do for
		 printf("%d",result); // ser falsa assim saindo do loop de repeti��o e finalizando a fun��o
		 i = 3;
		 }
		i = i -1;
	}
	
	return 0;
}
