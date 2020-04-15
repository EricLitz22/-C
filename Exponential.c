#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 float num,mult;
 int i, n,j; // são 3 variaveis para comparação de continuidade do programa
 scanf("%f %d",&num,&n); // primeiro pega a base e o expoente
 j = 0; // a variavel j é apenas para comparação
 mult = num;
  /* no mesmo esquema de loop a variavel i é igualada a zero para que pule a repetição se o expoente for 0*/
 for(i = n;i!=0;i = i+1){
	 if(n>1){ // enquanto o n for > 1 ele fará o exponencial
 		num = mult*num;
 		n = n - 1; // subtrairá o "n" até q seja 0
 		j = j + 1; // ao passo que aumetará "j"
	 }
	 else{ // quando "n" = 0 ele imprime o valor da operação e sai da repetição tornando a condição de rep falsa
		printf("%.2f\n",num);
	 	i = 0;
		 }
		 i = i - 1;
 }   
  if(n==0 && j ==0) printf("%.2f",num/num); /* esse if serve para se apenas o expoente for realmente 0
  "j" apenas serve para o programa saber se realmente ele não passou pelo loop, caso ele tenha passado
  essa variável será maior que 0 então não imprimirá o valor */

	return 0;
}
