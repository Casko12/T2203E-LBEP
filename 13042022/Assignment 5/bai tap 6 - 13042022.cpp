// nhap n so nguyen, tim so luon so luong lien tiep nhieu nhat
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
	// dung bien dem (c) de dem so duong lien tiep nhieu nhat
	int c = 0;
	int max = 0;
	for(int i=0;i<n;i++){
	if(arr[i]>0){
		c++;
		if(c>max){
			max=c;
		}
	}else{
		c=0;
	}
	}
	printf("So luong cac so duong lien tiep nhieu nhat: %d",max);
}

