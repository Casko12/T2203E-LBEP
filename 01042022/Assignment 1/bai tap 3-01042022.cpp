#include <stdio.h>
#include <math.h>
int main(){

 	//input a
 	printf("nhap canh a: ");
	 int a;
 	scanf("%d",&a);

	//input b
 	printf("nhap canh b: ");
	 int b;
 	scanf("%d",&b);
 	
 	//input c
 	printf("nhap canh c: ");
	 int c;
 	scanf("%d",&c);
 	
 	int d;
	 d = (a+b+c)/2;
 	
 	// kiem tra xem co phai tam giac khong va tinh chu vi, dien tich
 	if(a>=b+c || b>=a+c || c>=a+b){
	 printf("Day khong phai ba canh cua mot tam giac");
	 }else{
	 	printf("Chu vi tam giac la: %d ",2*d);
	 	printf("Dien tich tam giac la: %f",sqrt(d*(d-a)*(d-b)*(d-c)));
	 }
}

