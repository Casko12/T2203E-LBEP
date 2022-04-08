// nhap so nguyen n, tim so dao nguoc cua n
# include <Stdio.h>
int main(){
	
	printf("nhap so nguyen n: \n");
	int n;
	scanf("%d",&n);
	int a=0;
	int i=0;
	while (n>0){
		i=n%10;
		a=a*10+i;
		n=n/10;
	}
	printf("so dao nguoc la: %d", a);
}
