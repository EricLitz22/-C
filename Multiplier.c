#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int num,result,i;
	result=1;
	scanf("%d",&num);
	for(num = num;num==1;num = num-1){
			result= result*num;
			printf("%d",result);
		}
	
	return 0;
}
