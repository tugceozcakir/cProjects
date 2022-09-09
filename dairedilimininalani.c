#include<stdio.h>
#include<math.h>

#define pi 3.1415

int main(){
    //diliminalani = pi*r*r*aci/360
    
    double  r;
    double  aci;
    double  diliminalani;
    
    printf("Lutfen alanını ogrenmek istediginiz dairenin yaricapini giriniz.");
    scanf("%lf", &r);
    
    printf("Lutfen dairenin taradigi aci degerini giriniz.");
    scanf("%lf", &aci);
    
          diliminalani = pi*r*r*aci/360;
          
          printf("Dairenizin tarali alani = %lf", diliminalani);
          return 0;
}
