#include <stdio.h>
// ham nhap so 
void nhapSo(int *a, int *b){
	printf("Nhap so thu nhat: ");
	scanf("%d",a);
	printf("Nhap so thu hai: ");
	scanf("%d",b);
	return;
}

// ham tinh tong (a,b)
int tinhTong(int a, int b){
	return a+b;
}

// ham tinh hieu (a,b)
int tinhHieu(int a, int b){
	return a-b;
}

// ham tinh tich (a,b)
int tinhTich(int a, int b){
	return a*b;
}
	
// ham tinh thuong (a,b)
double tinhThuong(int a, int b){
	return b!=0?(double)a/b:NULL;
}

// menu giao dien
void menu(){
	printf(" TINH TOAN:\n");
	printf("==================\n");
	printf("1. Nhap so\n");
	printf("2. Tinh tong\n");
	printf("3. Tinh hieu\n");
	printf("4. Tinh tich\n");
	printf("5. Tinh thuong\n");
	printf("6. Thoat\n");
	printf("==================\n");
	
	return;
}


int main(){
	int m,a,b;
	bool f=false;
	do{
	menu();
	scanf("%d",&m);
	switch(m){
		case 1:{
			nhapSo(&a,&b);
			f=true;
			break;
		}
		
		case 2:{
			if(!f){
				printf("Vui long nhap gia tri 2 so truoc!\n");
				break;
			}
			int c=tinhTong(a,b);
			printf("Tong 2 so: %d\n",c);
			
			break;
		}
		
		case 3:{
			if(!f){
				printf("Vui long nhap gia tri 2 so truoc!\n");
				break;
			}
			int c=tinhHieu(a,b);
			printf("Hieu 2 so: %d\n",c);
			
			break;
		}
		
		case 4:{
			if(!f){
				printf("Vui long nhap gia tri 2 so truoc!\n");
				break;
			}
			int c=tinhTich(a,b);
			printf("Tich 2 so: %d\n",c);
			
			break;
		}
		
		case 5:{
			if(!f){
				printf("Vui long nhap gia tri 2 so truoc!\n");
				break;
			}
			double c=tinhThuong(a,b);
			if(c==NULL){
				printf("Khong the chia cho 0");
			}else{
				printf("Thuong 2 so: %lf\n",c);
			}
			break;
		}
	
	}
	}while(m!=6);
}
