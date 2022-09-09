#include <stdio.h>

int     main(){
        int     sayi, sayac, sonuc;
        sonuc = 1;
        printf("Asal olup olmadigini ogrenmek istediginiz sayiyi giriniz.");
        scanf("%d", &sayi);
	
	if(sayi < 2){
		printf("Sayiniz asal degildir.");
}
	else {
 	       for(sayac = 2; sayac < sayi/2; sayac++){
                if(sayi%sayac==0){
			sonuc = 0;
			break;
		}
}
		if(sonuc == 1) {
                        printf("Sayiniz asal sayidir.");
                }
                else {

                        printf("Sayiniz asal sayi degildir.");
                }
}
return 0;
}                                                                                                      
