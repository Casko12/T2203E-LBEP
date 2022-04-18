// cho mang 1 chieu n so nguyen, tim doan [a,b] sao cho chua tat ca cac gia tri trong mang
# include <stdio.h>
int main(){
//nhap mang n so
	int n;
	do{
    printf("Nhap n >0: ");
    scanf("%d",&n);
    }while(n<=0);
 	int arr[n];
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
// tim mang [a,b] chua tat ca ca gia tri cua mang	
	int b=arr[0];
	int a=arr[0];
	for(int i=0;i<n;i++){
		if(b<arr[i]){
			b=arr[i];
		}
		if(arr[i]<a){
			a=arr[i];
		}
	}
	printf("\n[%d,%d] la doan chua tat ca cac gia tri cua mang",a,b);
}
