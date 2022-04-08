// nhap so nguyen n, tim so lon nhat be hon n chia het cho 2 va 3
# include <Stdio.h>
int main(){
	
	printf("nhap so nguyen n: \n");
	int n;
	scanf("%d",&n);

	int i=0;
	while (n>(i+6)){
		i+=6;
	}
	printf("so lon nhat be hon n chia het cho ca 2 va 3 la: %d",i);
}
