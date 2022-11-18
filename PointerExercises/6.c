#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char dizi[100];
    char eleme;
    char *pointer;

    printf("Lutfen bir karakter dizisi girin : ");
    gets(dizi);
    printf("Karakter dizisinden cikarmak istediginiz karakteri giriniz : ");
    scanf("%c",&eleme);

    for(pointer = dizi;*pointer;pointer++){
        if(*pointer == eleme){
            strcpy(pointer,pointer+1);
        }
    }
    printf("Eleme yapildiktan sonra karakter dizimizin son hali :%s ",dizi);
}
