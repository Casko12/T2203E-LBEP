#include <stdio.h>
#include <math.h>
int main(){

 //Input Thang
 	printf("Nhap thang: \n");
 	int t;
 	scanf("%d",&t);
	if(t<=0 || t>12){
		printf("Nhap sai thang!!!\n");
	}
 //Input Ngay
 	printf("Nhap ngay: \n");
 	int n;
 	scanf("%d",&n);
 	if(n<=0 || n>31 || (n>28 && t==2) || (n>30 && t==4) || (n>30 && t==6) || (n>30 && t==9) || (n>30 && t==11)){
	 printf("Nhap sai ngay!!!\n");
	 }
 
 	//Tinh ngay thu bao nhieu trong nam va la thu may
 	
 	int a;
 	int b;
 	
 	if(t==1){
 		a=n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=a && a<7){
 			printf("Hom nay la Thu %d",a+1);
		 }else{
		 	if(1<=b && b<=6){
		 	printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
	}
	 
 	if(t==2){
 		a= 31+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
   	if(t==3){
 		a= 31+28+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
   	if(t==4){
 		a= 31+28+31+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
  
    if(t==5){
 		a= 31+28+31+30+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
 	if(t==6){
 		a= 31+28+31+30+31+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
 	if(t==7){
 		a= 31+28+31+30+31+30+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
 	if(t==8){
 		a= 31+28+31+30+31+30+31+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
 	if(t==9){
 		a= 31+28+31+30+31+30+31+31+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
 	if(t==10){
 		a= 31+28+31+30+31+30+31+31+30+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
  	if(t==11){
 		a= 31+28+31+30+31+30+31+31+30+31+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 }
 
 	if(t==12){
 		a= 31+28+31+30+31+30+31+31+30+31+30+n;
 		b = a % 7;
 		printf("Day la ngay thu %d trong nam\n",a);
 		if(1<=b && b<=6){
 			printf("Hom nay la Thu %d",b+1);
		 }else{
		 	printf("Hom nay la Chu Nhat");
		 }
	 } 
 }
