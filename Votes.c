#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int voto,i=1,a=0,b=0,c=0;
	while (i>0){
		scanf("%d",&voto);
		if(voto==4) a = a+1;
		else if(voto==5) b = b+1;
		else if(voto==9) c = c+1;
		else if (voto==0) i = 0;
	}
	
	if(a>b && b>c) printf("canal 4: %d\ncanal 5: %d\ncanal 9: %d",a,b,c);
	else if(a>c && c>b) printf("canal 4: %d\ncanal 9: %d\ncanal 5: %d",a,c,b);
	
	else if(b>a && a>c) printf("canal 5: %d\ncanal 4: %d\ncanal 9: %d",b,a,c);
	else if(b>c && c>a) printf("canal 5: %d\ncanal 9: %d\ncanal 5: %d",b,c,a);
	
	else if(c>b && b>a) printf("canal 9: %d\ncanal 5: %d\ncanal 4: %d",c,b,a);
	else if(c>a && a>b) printf("canal 9: %d\ncanal 4: %d\ncanal 5: %d",c,a,b);
	
	return 0;
}
