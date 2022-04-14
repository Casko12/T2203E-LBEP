#include<stdio.h>
int main(){
// nhap n >=0
    int n;
    do{
    printf("Nhap n >=0: ");
    scanf("%d",&n);
    }while(n<0);
// tach cac chu so va display chu so dau tien   
	int i;
    for(;n!=0;){
    	i = n % 10;
        n /= 10;
	}
	printf("Chu so dau tien: %d",i);
}  
    

