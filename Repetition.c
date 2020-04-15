#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	double result;
	float i;
		result = 0;
		scanf("%d",&n);
		for(i = n;i != 0;i = i-1){
			if(i>0){								
				result = result + (1/i);
				printf("n=%f\tresult=%.2lf\tnum=%f\n",i,result,(1/i));
			}
		}
			printf("%.2lf",result);
	
	return 0;
}
