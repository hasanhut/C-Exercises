#include <stdio.h>
#include <stdlib.h>

struct yarismaciTip{
    char isim[10];
    char soyisim[10];
    float puan[10];
    float performans;
};

float puanHesap(struct yarismaciTip pat){

    int i;
    float sonuc = 0.0;
    float max = 0.0;
    float min = 6.0;

    for(i=0;i<10;i++){
        if(pat.puan[i] > max){
            max = pat.puan[i];
        }
        if(pat.puan[i] < min){
            min = pat.puan[i];
        }

        sonuc += pat.puan[i];
    }

    sonuc = (sonuc - max - min) / 8;
    return sonuc;
}

int main(){
    struct yarismaciTip patenci;
    printf("Yarismacinin Adi:\n");
    scanf("%s",&patenci.isim);

    printf("Soyadi:\n");
    scanf("%s",&patenci.soyisim);

    int i;
    printf("Hakem Puani:\n");
    for(i=0;i<10;i++){
        scanf("%f",&patenci.puan[i]);
    }

    patenci.performans = puanHesap(patenci);

    printf("Performans Puani:%f",patenci.performans);
}
