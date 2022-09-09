#include<stdio.h>

int main(){
     
    int bolunen;
    int bolen;
    int bolum = 0;
    int sonuc = 0;
    
    printf("Lutfen bolunen sayiyi giriniz:");
    scanf("%d", &bolunen);
    
    printf("Lutfen bolen sayiyi giriniz:");
    scanf("%d", &bolen);
    
    if(bolunen < bolen){
        printf("Bu sayi %d ile bolunemez.", bolen);
        sonuc = 0;
    }
    while(bolunen >= bolen){
        bolunen = bolunen - bolen;
        bolum++;
        sonuc = 1;
    }

    if(sonuc == 1){
        printf("Bu bolme isleminin sonucu: %d", bolum);
    }
    return 0;
}
