#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a=10000,b=5000;
		printf("%.2f\n",a-b);
		while(a>b){
			if(a>b){
				a = a + 100;
				b = b + 300;
				printf("%.2f\n",a-b);
				}
			else if(a=b) printf("%.2f",a-b);
		}
	
	return 0;
}
