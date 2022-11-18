#include <stdio.h>
#include <stdlib.h>

//palendrom ---- ece,ada,12321
int main(){
    char cumlem[100];
    char *p1;
    char *p2;
    int kontrol;


    printf("Lutfen max 100 karakterli bir cumle giriniz\n");
    gets(cumlem);

    for(p2=cumlem;*p2;p2++);

    p2--;

    kontrol = 1;
    for(p1=cumlem;kontrol == 1 && p1<p2;p1++,p2--){
        if(*p1 != *p2){
            kontrol = 0;
        }
    }

    if(kontrol == 1){
        printf("Girilen %s bir palendromdur",cumlem);
    }else{
        printf("Bu bir palendrom degildir");
    }

}
