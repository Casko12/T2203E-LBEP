#include<stdio.h>
int main(){
// nhap n >=0
    int n;
    do{
    printf("Nhap n >=0: ");
    scanf("%d",&n);
    }while(n<0);
// tach cac chu so va tinh tong    
    int s = 0;
    for(int i;n!=0;){
    	i = n % 10;
        s += i;
        n /= 10;
    }    
    printf("Tong cac chu so la: %d",s);
}
