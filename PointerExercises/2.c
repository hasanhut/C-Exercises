#include <stdio.h>
#include <stdlib.h>
#define N 1


// max min sorusu

int main(){
    int min,max,i;
    int *ptr;
    int dizi[N];
    printf("%d tane deger giriniz \n",N);

    for(ptr = dizi;ptr<dizi+N;ptr++){
        scanf("%d",ptr);
    }

    max=min=dizi[0];
    for(ptr=dizi+1;ptr<dizi+N;ptr++){
        if(*ptr>max){
            max = *ptr;
        }
        if(*ptr<min){
            min = *ptr;
        }
    }

    printf("Max Degeri :%d\n",max);
    printf("Min Degeri :%d",min);
}
