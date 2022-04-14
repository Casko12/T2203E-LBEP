#include<stdio.h>
int main(){
// nhap n >=0
    int n;
    do{
    printf("Nhap n >=0: ");
    scanf("%d",&n);
    }while(n<0);
// tach cac chu so va tim chu so lon nhat  
	int max=0;
    for(int i;n!=0;){
    	i = n % 10;
        n /= 10;
        if(i>max){
        	max=i;
		}
    }	    
    printf("Chu so lon nhat: %d",max);
}
