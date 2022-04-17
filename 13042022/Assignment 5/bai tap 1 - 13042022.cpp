// tim Trung binh cong cac so le trong mang
# include <stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
	int arr[n];
	int i;
	int s=0;
	int c=0;
    for(i=0; i<n; i++){	
	 scanf("%d",&arr[i]);
    	if(arr[i]%2!=0){
    		s+=arr[i];
    		c++;
    	}
	}
    printf("TBC cac so le: %f",(float)s/c);		
}
