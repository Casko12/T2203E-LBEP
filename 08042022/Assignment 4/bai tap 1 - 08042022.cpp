# include <Stdio.h>
int main(){
	
	int n;
	do{
		printf("nhap so nguyen n: \n");
		scanf("%d",&n);
	}while(n<=0);
	
	int S=0;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			printf("cac uoc cua n: %d\n",i);
			S=S+i;
		}
	}
	printf("Tong cac uoc la: %d",S);
}
