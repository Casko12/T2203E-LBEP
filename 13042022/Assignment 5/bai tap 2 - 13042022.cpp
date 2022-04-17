// tim Trung binh cong cac so le o vi tri chan trong mang
# include <stdio.h>
int main(){
	int n;
	do{
    printf("Nhap n >0: ");
    scanf("%d",&n);
    }while(n<=0);
	
	int arr[n];
	int s=0;
	int c=0;
    for(int i=0; i<n; i++){	
	scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<n; i+=2){
    if(arr[i]%2!=0){
    		s += arr[i];
    		c++;
    	}
		}
    printf("TBC cac so le o vi tri chan: %f",(float)s/c);		
}
