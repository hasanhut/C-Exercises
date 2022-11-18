#include<stdio.h>

int main(){

	int x = 255;

	int *ptr;
	ptr = &x;

	printf("&x => %d\n",&x);
	printf("ptr => %d\n", ptr);
	printf("&ptr => %d\n",&ptr);
	printf("*ptr => %d\n",*ptr);




	// ptr = i'nin adres bilgisini verir.
	// *ptr = i'nin degeri yani 10'dur.
	//  &ptr = pointer degeride ram'de adres tutar ve bu o degeri gösterir.
	//  &i = i'nin adres bilgisini verir ----- &i = ptr
}
