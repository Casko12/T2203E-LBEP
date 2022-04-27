#include <stdio.h>
int daoNguocMang(int n,int arr[]){
	int j;
	for(int i=0; i<n/2; i++){
        int j=n-i-1;
        int tmp = arr[j];
        arr[j] = arr[i];
        arr[i] = tmp;
    } 
    return arr[j];
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
	for (int i=0;i<n;i++){
		
		int j=daoNguocMang(n,arr);
		printf("Ham dao nguoc: %d\n",j);
	}	
}
