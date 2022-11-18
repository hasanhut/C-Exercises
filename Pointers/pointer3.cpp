#include<stdio.h>

int main(){
	int *ptr;
	int a = 5;
	ptr = &a;
	printf("%d\n",a);
	a= 15;
	printf("%d\n",&a);
}
