#include <stdio.h>
#include<math.h>

int main(){
    
	double	pi = 3.1415;
    double  yaricap;
	double	alan;
    
    printf("Lutfen alanini ogrenmek istediginiz dairenin yaricapini giriniz.");
    scanf("%lf", &yaricap);
    

    alan = pi*yaricap*yaricap;
    printf("Dairenizin alani = %f", alan);
    
    return 0;
}
