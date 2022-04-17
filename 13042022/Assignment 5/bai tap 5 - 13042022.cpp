// tim so duong nho nhat trong mang
# include <stdio.h>
int main(){
    int n;
	do{
    printf("Nhap n >0: ");
    scanf("%d",&n);
    }while(n<=0);
    
	int arr[n];
    for(int i=0; i<n; i++){
	scanf("%d",&arr[i]);
    }
    // tim so duong nho nhat trong cac gia tri da nhap
    int min;
    for(int i=0;i<n;i++){
        if(arr[i] < min && arr[i]>0){
            min = arr[i];
        }
	}
	printf("\nSo duong nho nhat la: %d", min);
}
