// nhap 1 mang n so nguyen, va 1 gia tri x, tim gia tri trong mang xa x nhat
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	int arr[n];
	printf("Nhap mang: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	int j=0;
	int max = abs(arr[0]-x);
	for (int i=0;i<n;i++){
		if(abs(arr[i]-x)>max){
			max=abs(arr[i]-x);
			j=i;
		}
	}
	for (;j<n;j++){
		if (abs(arr[j]-x==max)){
			printf("Gia tri xa %d nhat la: %d",x,arr[j]);
		}
	}
	
}
