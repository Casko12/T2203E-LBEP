// nhap 1 mang n chuoi tu ban phim, sap sep theo alphabet
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
	for (int i =0;i<n-1;i++){
		for(int j=0; j<n-j-1;j++){
			if (strcmp(arrs[j],arrs[j+1])>0){
			char tmp[50];
			strcpy(tmp,arrs[j]);
			strcpy(arrs[j],arrs[j+1]);
			strcpy(arrs[j+1],tmp);
			}
		}
	}
	printf("Sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%s\n",arrs[i]);
	}		
}
// luu y: de cho chinh xac hon, co the convert het thanh chu hoa hoac chu thuong sau do moi so sanh

