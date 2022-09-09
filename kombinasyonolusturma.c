#include<stdio.h>
#include<math.h>

int faktoriyel(int sayi){
    
    if(sayi == 1 || sayi == 0){
        return 1;
    }
    else{
        return sayi * faktoriyel(sayi - 1);
    }
}

int main(){

    int n, r, kombinasyon;
    //C (n,r)= n!/ (( n-r)!.r !)
    printf("Kombinasyonunu ogrenmek istediginiz 1.sayiyi giriniz:");
    scanf("%d", &n);
    
    printf("2.sayiyi giriniz:");
    scanf("%d", &r);
    
    kombinasyon = faktoriyel(n) / (faktoriyel(n-r) * faktoriyel(r));
    
    printf("Kombinasyonunuz: %d", kombinasyon);
   
 return 0;
}
