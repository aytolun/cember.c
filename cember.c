#include<stdio.h>

int main(){
	
	float cember,alan,cevre,pi,cap;
	
	printf("cemberin capini giriniz:");
	
	scanf("%f",&cap);

		
	pi=3.14;
	alan=pi*cap*cap;
	cevre=2*pi*cap;
	
	printf("cemberin alani:%f, cemberin cevresi:%f",alan,cevre);	
	return 0;
}
