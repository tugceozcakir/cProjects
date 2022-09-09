#include<stdio.h>

int	main(){

	int	x,y;
	for(x=1;x<=10;x++){
		for(y=1;y<=10;y++){
			printf("%d x %d = %d\t",x,y,x*y);
		}
	}
	printf("\n");
}
