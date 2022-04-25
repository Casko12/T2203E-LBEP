// nhap 1 mang n so nguyen, dam bao cac so nhap vao khong bi trung nhau
# include <stdio.h>
int main(){
// nhap n >0
	int i,n;	
	do{
	printf("nhap n: ");
	scanf("%d",&n);
	}while(n<=0);	

// kiem tra xem trong cac so da nhap co so nao trung voi cac so da nhap truoc do k	
	int arr[n];
	for(int i=0;i<n;i++){
		bool f=false;
			printf("nhap phan tu thu %d: ",i);
			scanf("%d",&arr[i]);
			// kiem tra
			for(int j=0;j<i;j++){
				if (arr[j]==arr[i]){
				f=true;
				break;
				}
			}
		if(f){
			printf("So nay da ton tai! Vui long nhap lai\n");
			i--;
		}		
	}
	for (int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}	
}
	
