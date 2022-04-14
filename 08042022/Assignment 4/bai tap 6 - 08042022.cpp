#include<stdio.h>
int main(){
// nhap n >=0
    int n;
    do{
    printf("Nhap n >=0: ");
    scanf("%d",&n);
    }while(n<0);
// tach cac chu so va kiem tra tung chu so xem co phai so le khong   
	int i;
    for(;n!=0;){
    	i = n % 10;
        n /= 10;
		}
		if(i%2!=0){
        	printf("Toan bo cac chu so deu la chu so le");
		}else{
			printf("Khong phai toan bo cac chu so deu la chu so le");
	}
}
