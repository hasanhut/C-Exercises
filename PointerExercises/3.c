#include <stdio.h>
#include <stdlib.h>

// faktoriyel hesaplama
int faktoriyel(int *sayi){
    int sonuc = 1;
    for(int i=*sayi; i>=1;i--){
        sonuc *= (*sayi);
        (*sayi)--;
    }
    return sonuc;
}

int main(){
    int n,orijinalsayi;
    printf("Lutfen faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d",&n);
    orijinalsayi = n;
    printf("%d! = %d",orijinalsayi,faktoriyel(&n));
}
