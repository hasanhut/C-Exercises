#include <stdio.h>
#include <stdlib.h>

// kullancýdan bir karakter dizisi girmesinin isteyin ve bu girdiðiniz karakter dizisinin kaç karakterden oluþtugunu
// ekrana yazdýran bir program yazýnýz.

int main(){
    char dizi[100];
    char *pointer;

    printf("Lutfen bir karakter dizisi giriniz: \n");
    gets(dizi);

    for(pointer = dizi;*pointer;pointer++){

    }

    printf("Dizimiz %s %d karakterden olusmaktadir.",dizi,pointer-dizi);
}
