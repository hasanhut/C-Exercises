#include <stdio.h>

int main(){
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j = 0;
	for (i = 0;i<3;i++){
        printf("%d %d %d \n",arr[i],*(arr+i),*arr[i]);

        if(i==2){
            printf("%d %d ",arr[i][j],&arr[i][j]);
            printf(" %d ",*(*(arr+i)+j++));
        }
	}

    return 0;
}
