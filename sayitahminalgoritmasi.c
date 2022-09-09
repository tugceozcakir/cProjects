#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

int main(){
    int sayi, rastgelesayi;
    
    srand(time(NULL));
    //sayının her seferinde değişmesi için.
    
    
    rastgelesayi = rand() % 100 + 1;
    //randomun yüze bölümünden kalanın bir fazlası: rastgele sayinin 1'den 100'e kadar olan sayılardan oluşacağı anlamını taşır.
    
    printf("Lutfen tahmin ettiginiz sayiyi giriniz.");

   
    do{
        scanf("%d", &sayi);
        if(sayi < rastgelesayi){
            printf("Lutfen daha buyuk bir sayi giriniz.");
        }
        if(sayi > rastgelesayi)
        {
            printf("Lutfen daha kücük bir sayi giriniz.");
            
        }
                
    }while(sayi != rastgelesayi);
    
    printf("Tebrikler, doğru bildiniz!");
    
    return 0;
}
