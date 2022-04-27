#include <stdio.h>
int main(){
	int n;
	float S=0;
	do{
		printf("Nhap n: \n");
		scanf("%d",&n);
		if(n < 1){
			printf("Xay ra loi! Moi nhap lai n lon hon hoac bang 1\n");
		}
	}while(n<1);
	
	for(int i=1;i<=n;i++){
		S=S+(1.0/i);
	}
	printf("Tong 1 + 1/2 + ... + 1/%d la %f: \n",n,S);
}
