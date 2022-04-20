// nhap vao 1 chuoi va dem so lan xuat hien cac nguyen am a e i o u
# include <stdio.h>
# include <string.h>
int main(){
	
	char s[50];
	printf("Nhap chuoi: ");
	scanf("%s",s);

	int c=0;
	for (int i = 0; i<50;i++){
		if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			c++;
		}	
	}
	printf("So luong nguyen am la: %d",c);
}
