#include<stdio.h>

char* sayi_asal_mi(int sayi)
{
    if(sayi < 2)
        return "asal degil";
    else
    {
        for(int i = 2; i <= sayi / 2; i++)
        {
            if(sayi % i == 0)
                return "asal degil";
        }
    }
    return "asal";
}

int main()
{
    int sayi;
    printf("sayi gir: ");
    scanf("%d", &sayi);
    printf("%s",sayi_asal_mi(sayi));
    return 0;
}
