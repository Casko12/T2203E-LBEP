// nhap vao 1 mang n so nguyen, sau do nhap vao 1 so x, tim xem x co trong mang k
# include <stdio.h>
# include <stdio.h>
int main(){
	// nhap mang n so va x
	int n;
	do{
    printf("Nhap n >0: ");
    scanf("%d",&n);
    }while(n<=0);
 	int arr[n];
 	for(int i=0; i<n; i++){	
	scanf("%d",&arr[i]);
	}
 	
	int c=0;
 	int x;
    printf("Nhap x: ");
    scanf("%d",&x);
	
	for(int i=0; i<n; i++){	
		if (x == arr[i]){
  		printf("x co thuoc mang\n");
  		c++;
  		}
  	}
 	if (c == 0){
	printf("x khong thuoc mang\n");
	}
}

