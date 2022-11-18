#include <stdio.h>
#include <stdlib.h>

//Kullanýcýdan integer tipindeki bir dizinin degerlerini girmesini isteyin. 2 pointer kullanarak girdiniz dizi elemanlarýnýn
//bastan sona yerini degistiren bir C programý yazýn.

int main(){
    int dizi[5];
    int *sayi1,*sayi2;
    int n;
    int gecici;

    printf("Lutfen dizimizin eleman sayisini giriniz:");
    scanf("%d",&n);

    for(sayi1=dizi;sayi1<dizi+n;sayi1++){
        printf("Lutfen Eleman Giriniz :");
        scanf("%d",sayi1);
    }

    printf("Dizimizin ilk hali : ");
    for(sayi1=dizi;sayi1<dizi+n;sayi1++){
        printf(" %d ",*sayi1);
    }

    printf("\n");
    for(sayi1=dizi,sayi2=dizi+n-1;sayi1<sayi2;sayi1++,sayi2--){
        gecici = *sayi1;
        *sayi1 = *sayi2;
        *sayi2 = gecici;
    }

    printf("Dizimizin elemanlarinin yer degistirdikten sonra : ");
    for(sayi1=dizi;sayi1<dizi+n;sayi1++){
        printf(" %d ",*sayi1);
    }
    printf("\n");
}
