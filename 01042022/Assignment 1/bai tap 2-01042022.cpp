#include <stdio.h>
#include <math.h>
int main(){

	printf("Giai phuong trinh a*x*x + b*x + c =0 ");
 	
	//input a
 	printf("nhap a:");
	int a;
 	scanf("%f",&a);

	//input b
 	printf("nhap b:");
	int b;
 	scanf("%f",&b);
 	
 	//input c
 	printf("nhap c:");
	int c;
 	scanf("%f",&c);
 	
 	//tinh delta, can bac 2 delta
 	int x1;
 	int x2;
	int delta;
	int d;
	delta = (b*b - 4*a*c);
	d = sqrt(delta);
	
	if(delta<0){
	printf("Phuong trinh vo nghiem");
	
	}else if(delta==0){
	x1 = (-b/(2*a));
	printf("Phuong trinh co nghiem kep x1 = x2 = %f",x1);
	
	}else{
	x1= ((-b+d)/(2*a));
	x2= ((-b-d)/(2*a)); 
	printf("nghiem 1 la: %f",x1);
	printf("nghiem 2 la: %f",x2);  
	}
}
