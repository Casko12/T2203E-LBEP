#include <stdio.h>
// lap ham tinh mu s=x^y
int hamTinhMu (int x, int y){
	int s=1;
	for(int i=1; i<=y; i++){
		s *=x;
	}
	return s;
}


// ham kiem tra so nguyen to
bool kiemTraSoNguyenTo(int n){
	if(n<2) return false;
	if(n<4) return true;
	for (int i=2; i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

// ham tim max trong mang
int timMax(int *p, int n){
	int max=p[0];
	for(int i=0;i<n;i++){
		if(max<p[i]){
			max=p[i];
		}
	}
	return max;
}


// tim so nguyen to nho nhat nhung lon hon moi gia tri trong mang
int soNguyenToLon(int arr[],int n){
	int m=timMax(arr,n);
	for(int i=m+1;;i++){
		if(kiemTraSoNguyenTo(i)){
			return i;
		}
	}
}

// tim ucln tat ca cac phan tu trong mang
int timUCLN(int *p, int n){
	int ucln=1;
	for(int i=2;i<timMax(p,n);i++){
		bool f = true;
		for(int j=0;j<n;j++){
			if(p[j]%i!=0){
				f=false;
				break;
			}
		}
		if(f&&i>ucln){
			ucln=i;
		}
	}
	return ucln;
}

//tim bcnn tat ca cac phan tu trong mang
int timBCNN(int *p, int n){
	int m=p[0]>0?p[0]:-p[0];
	for(int i=m;;i++){
		bool f = true;
		for(int j=0;j<n;j++){
			if(i%p[j]!=0){
				f=false;
				break;
			}
		}
		if(f){
			return i;
		}
	}
}

