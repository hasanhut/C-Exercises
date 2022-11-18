#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
    char ad[10];
    char soyad[10];
    int yas;
};

int main(){
    struct ogrenci hasan = {"Hasan","Hut",21};

    //ya da şu şekilde yazabiliriz
    /*struct ogrenci hasan
    strcpy(hasan.ad,"Hasan");
    strcpy(hasan.soyad,"Hut");
    hasan.yas(21);*/

    printf("%s %s %d",hasan.ad,hasan.soyad,hasan.yas);
}
