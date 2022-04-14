# include <stdio.h>
int main(){
	// nhap a,b >0
    int a;
    do{
	printf("Nhap a >0: ");
    scanf("%d",&a);
    }while(a<=0);
    int b;
    do{
    printf("Nhap b >0: ");
    scanf("%d",&b);
	}while(b<=0);
	
 	// tim UCLN   
	for (int ucln=a;ucln>=1;ucln--){
        if (a%ucln==0 && b%ucln==0){
            printf("Uoc chung lon nhat(%d,%d)= %d\n",a,b,ucln);
            break;
        }
    }
    
 	// tim BCNN   
    for (int bcnn=a;bcnn<=a*b;bcnn++){
        if (bcnn%a==0 && bcnn%b==0){
            printf("Boi chung nho nhat(%d,%d)= %d\n",a,b,bcnn);
            break;
        }
    }
}
