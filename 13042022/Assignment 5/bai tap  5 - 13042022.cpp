// tim so nguyen duong nho nhat trong mang n so
# include <stdio.h>
int main(){
// nhap mang n so
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
	int min;
	for(int i=0;i<n;i++){
		if(arr[i]<min && arr[i]>0){
			min = arr[i];
		}
	}
	printf("So nguyen duong nho nhat: %d",min);
}
