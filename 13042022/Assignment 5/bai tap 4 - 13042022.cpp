// tim so le cuoi cung cua mang
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
// kiem tra mang nay co so le hay khong	
	for(int i=0;i<n;i++){
		if (arr[i]%2==0){
			printf("Mang nay khong co so le\n");
		}else{
		for(int i=n-1;i<n;i--){
			if(arr[i]%2!=0){
			printf("\nSo le cuoi cung cua mang la: %d",arr[i]);
			}
		}
		}
	}
}
