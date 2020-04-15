#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	float nota,media,result;
	while(nota != -1){
		scanf("%f",&nota);
		if(nota>-1 && nota <= 10){
			result = result + nota;	
			i = i + 1;
		}
		else media = result / i;
	}
	printf("%.2f",media);
	return 0;
}
