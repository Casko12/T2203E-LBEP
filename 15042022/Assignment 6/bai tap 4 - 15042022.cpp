// cho mang 1 chieu n so nguyen, tim doan [-x,x] sao cho chua tat ca cac gia tri trong mang
# include <stdio.h>
int main(){
// nhap mang so n
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
// tim mang [-x,x] chua tat ca cac gia tri cua mang	
	int x=arr[0];
	int min=arr[0];
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
		if(min<0 && max<0){
			x=-min;
		}
		if(min>0 && max>0){
			x=max;
		}
		if(min<0 && max>0 && -min>max){
			x=-min;
		}
		if(min<0 && max>0 && -min<max){
			x=max;
		}
	}
	printf("\n[-%d,%d] la doan chua tat ca cac gia tri cua mang",x,x);
}
