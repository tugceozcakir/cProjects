#include <stdio.h>

int	main(){
	int	sayi1, sayi2;

	printf("Lutfen ilk sayiyi giriniz.");
	scanf("%d", &sayi1);
	
	printf("Lutfen ikinci sayiyi giriniz.");
	scanf("%d", &sayi2);

	if (sayi1 % sayi2 == 0){
		printf("Birinci sayiniz ikinci sayiniza tam bolunmektedir.");
	}
	else if (sayi2 % sayi1 == 0){
		printf("İkinci sayiniz ilk sayiniza tam bolunmektedir.");
	}
	else {
		printf("Girdiginiz sayilar birbirine tam bolunmemektedir.");
	}
	return 0;
}
