#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 float num,mult;
 int i, n,j; // s�o 3 variaveis para compara��o de continuidade do programa
 scanf("%f %d",&num,&n); // primeiro pega a base e o expoente
 j = 0; // a variavel j � apenas para compara��o
 mult = num;
  /* no mesmo esquema de loop a variavel i � igualada a zero para que pule a repeti��o se o expoente for 0*/
 for(i = n;i!=0;i = i+1){
	 if(n>1){ // enquanto o n for > 1 ele far� o exponencial
 		num = mult*num;
 		n = n - 1; // subtrair� o "n" at� q seja 0
 		j = j + 1; // ao passo que aumetar� "j"
	 }
	 else{ // quando "n" = 0 ele imprime o valor da opera��o e sai da repeti��o tornando a condi��o de rep falsa
		printf("%.2f\n",num);
	 	i = 0;
		 }
		 i = i - 1;
 }   
  if(n==0 && j ==0) printf("%.2f",num/num); /* esse if serve para se apenas o expoente for realmente 0
  "j" apenas serve para o programa saber se realmente ele n�o passou pelo loop, caso ele tenha passado
  essa vari�vel ser� maior que 0 ent�o n�o imprimir� o valor */

	return 0;
}
