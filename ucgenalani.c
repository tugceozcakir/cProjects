#include <stdio.h>

int	main(){

	//alan = taban uzn. * yukseklik / 2

	int	n, h, ucgeninalani;
	
	printf("Lutfen alanini ogrenmek istediginiz ucgenin taban uzunlugunu giriniz.");
	scanf ("%d", &n);
	
	printf("Lutfen ucgenin yuksekligini giriniz.");
	scanf("%d", &h);

	ucgeninalani = n*h/2;
	printf("Ucgeninizin alani = %d", ucgeninalani);
return 0;
}
