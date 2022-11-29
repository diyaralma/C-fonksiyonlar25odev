#include <stdio.h>
#define sinavsayisi 3
// 3 notu girilen sinavlarin ortalmasini hesaplayan uygulama.
int hesaplama(int a,int b,int c){

float ort;

ort = (a + b + c) / 3.0;

if(ort>=49.5 && ort <= 100)
		printf("Ortalamaniz %.2f - Gectiniz",ort);
	else if(ort>=0 && ort < 49.5)
		printf("Ortalamaniz %.2f - Kaldiniz",ort);
	else
	printf("Notlarinizi dogru giriniz");    

}


int main(){

int sinav1,sinav2,sinav3;

printf("1.sinav notunuzu giriniz:");
scanf("%d",&sinav1);
printf("2.sinav notunuzu giriniz:");
scanf("%d",&sinav2);
printf("3.sinav notunuzu giriniz:");
scanf("%d",&sinav3);

hesaplama(sinav1,sinav2,sinav3);

   return 0;
}