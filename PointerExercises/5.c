#include <stdio.h>
#include <stdlib.h>

// kullanc�dan bir karakter dizisi girmesinin isteyin ve bu girdi�iniz karakter dizisinin ka� karakterden olu�tugunu
// ekrana yazd�ran bir program yaz�n�z.

int main(){
    char dizi[100];
    char *pointer;

    printf("Lutfen bir karakter dizisi giriniz: \n");
    gets(dizi);

    for(pointer = dizi;*pointer;pointer++){

    }

    printf("Dizimiz %s %d karakterden olusmaktadir.",dizi,pointer-dizi);
}
