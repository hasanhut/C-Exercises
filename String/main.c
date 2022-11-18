#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ay[] = "Aralik";
    printf("Karakter Dizimizin Boyu: %d",strlen(ay));
    printf("\n");

    int sonuc;
    char ay1[] = "ARALIK";
    sonuc = strcmp(ay,ay1);
    printf("%d",sonuc);    // ay , ay1'den daha büyük (ASCII koduna göre)
    printf("\n");




    return 0;
}
