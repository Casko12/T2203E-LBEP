// nhap 1 mang n chuoi, sau do nhap 1 chuoi va tim kiem chuoi nay co trong ds khong
# include <stdio.h>
# include <string.h>
int main(){
	int n;
	printf("Nhap so chuoi: ");
	scanf("%d",&n);
	char arrs[n][50];
	printf("Nhap mang chuoi: ");
	for (int i = 0; i<n;i++){
		scanf("%s",arrs[i]);
	}
	
	int c=0;
	char x[50];
	printf("Nhap vao mang can tim: ");
	scanf("%s",&x);
	for(int i=0; i<n; i++){	
		if (strcmp(x,arrs[i])==0){
  		printf("Chuoi da nhap co thuoc danh sach\n");
  		c++;
  		}
  	}
 	if (c == 0){
	printf("Chuoi da nhap khong thuoc danh sach\n");
	}
}
