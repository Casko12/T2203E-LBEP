#include <stdio.h>
#include <math.h>
// tong cac chu so cua so nguyen n
int tongCacChuSo(int n){
    int s = 0;
    for(int i;n!=0;){
    	i = n % 10;
        s += i;
        n /= 10;
    }
	return s;    
}

// tinh chu vi tam giac (biet 3 canh a,b,c)
int chuViTamGiac(int a, int b, int c){
	int ChuVi=a+b+c;
	return ChuVi;
}

// tinh dien tich tam giac (biet 3 canh a,b,c)
int dienTichTamGiac(int a, int b, int c){
	int d=(a+b+c/2);
	float DienTich= sqrt(d*(d-a)*(d-b)*(d-c));
	return DienTich;
}

// tim uoc chung lon nhat cua 2 so
int UCLN(int a, int b){
	for (int ucln=a;ucln>=1;ucln--){
        if (a%ucln==0 && b%ucln==0){
        	return ucln;
        }
    }
}

// tim boi chung nho nhat cua 2 so
int BCNN(int a, int b){
	for (int bcnn=a;bcnn<=a*b;bcnn++){
        if (bcnn%a==0 && bcnn%b==0){
			return bcnn;
		}
	}
}
