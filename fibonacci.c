#include<stdio.h>
#include<math.h>

int main(){
    
    int n, z;
    int x = 1;
    int y = 1;
    
    printf("Fibonacci'de kac eleman gormek istiyorsunuz?");
    scanf("%d", &n);
    
    printf("%d\t %d", x, y);
    
    for(int i = 0; i<n; i++){
        
        z = x + y;
        x = y;
        y = z;
        
        printf("\t%d", z);
    }
    
    return 0;
}
