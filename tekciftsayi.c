#include <stdio.h>

int	main(){

int	i;

printf("Lutfen bir sayi giriniz.");
scanf("%d", &i);

if (i % 2 == 0){
	printf("Bu bir cift sayidir.");
}

else{
	printf("Bu bir tek sayidir.");
}

return 0;
}
