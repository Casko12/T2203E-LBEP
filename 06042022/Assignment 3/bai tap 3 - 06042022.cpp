// nhap so nguyen n, kiem tra n co phai so hoan hao khong
# include <Stdio.h>
int main(){
	
	printf("nhap so nguyen n: \n");
	int n;
	scanf("%d",&n);
	int S=0;
	int i=1;
	while(i<=n/2){
	if(n%i==0){
		S+=i;
	}
	i++;
	}
	if(S==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai so hoan hao",n);
	}

}
