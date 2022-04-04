#include <stdio.h>
int main(){

 	//input a
 	int a;
 	scanf("%d",&a);

	//input b
 	int b;
 	scanf("%d",&b);
 	
 	//input c
 	int c;
 	scanf("%d",&c);
 	
 	// so sanh a, b, c
 	if(a<b){
 		//so sanh a,c
 		if(a<c){
 			printf("%d la so nho nhat",a);
		}else{
		 	printf("%d la so nho nhat",c);
		}
	}else{
		if(b<c){
			printf("%d la so nho nhat",b);
		}else{
         	printf("%d la so nho nhat",c);
        }
	}	
}

