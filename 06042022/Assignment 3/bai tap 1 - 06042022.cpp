// nhap so nguyen n, in ra cac so le nho hon n
# include <Stdio.h>
int main(){
	
	printf("nhap so nguyen n: \n");
	int n;
	scanf("%d",&n);
	int i = 1;
	printf("cac so le nho hon %d: ",n);
	while(i<n){
		printf("%d ",i);
		i+=2;
	}
}
