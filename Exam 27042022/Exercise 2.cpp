#include <stdio.h>
void daoNguocHam(int n, int* arr){    
    for (int i=0; i<n/2;i++) {
        int tmp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    }
}

int main(){
	int n;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n<=0);
	int arr[n];
	for(int i=0;i<n;i++){
	printf("Nhap phan tu thu %d cua mang: \n",i+1);
	scanf("%d",&arr[i]);			
	}
	daoNguocHam(n,arr);
	for(int i=0;i<n;i++){
	printf("Ham dao nguoc: %d\n",arr[i]);
	}
}
