# include <stdio.h>
// nhap 2 so nguyen duong a, b, a<b
int main() {
	int a,b;
	do{
		printf("Nhap so nguyen duong a: ");
		scanf("%d",&a);	
	}while(a<0);
	do{
		printf("Nhap so nguyen duong b: ");
		scanf("%d",&b);
	}while(b<a);
	// kiem tra i co phai so nguyen to hay k
	for(int i=a; i<=b; i++){
		if(i==1){
			continue;
		}
		bool f=true;
		for (int j=2;j<=i/2;j++){
			if(i%j==0){
				f= false;
				break;
			}
		}
	if(f){
		printf("SNT: %d\n",i);
	}
	}	 
}
