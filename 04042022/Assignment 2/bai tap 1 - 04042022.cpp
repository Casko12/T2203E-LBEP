#include <stdio.h>
#include <math.h>
int main(){
	printf("Nhap thu trong tuan\n");
	
	//nhap thu 
	printf("Nhap thu: ");
 	int a;
 	scanf("%d",&a);

	if(a==8){
	printf("Hom nay la Chu Nhat");	
	}else{
		if(2<= a && a<= 7){
			printf("Hom nay la thu %d",a); 
		}else{
			printf("Khong phai ngay trong tuan"); 
		} 
	} 
}
