#include <stdio.h>

int main(){
	int sayilar[5] = {1,2,3,4,5};
	
	int *p = sayilar; // *p = sayilar --->> *p = &sayilar[0] ayný
	
	
	printf("%d\n",*p);
	printf("%d\n",*p+1); // *(p+1) --> p[1],sayilar[1]
	
	printf("%d\n",p);
	printf("%d\n",p+1);
	printf("%d\n",p+2);
	printf("%d\n",p+3);
}
