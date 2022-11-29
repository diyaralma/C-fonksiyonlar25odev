#include <stdio.h>


// tabanini ve yuksekligini kullanicidan alip ucgenin alanini yazdiran uygulama.

int alanhesaplama(int taban,int yukseklik){

   float alan;

   alan = (taban*yukseklik)/2;
	printf("Ucgenin alani : %.2f",alan);
}


int main(){

int taban,yukseklik;

printf("Ucgenin tabanini giriniz : ");  
scanf("%d",&taban);
	 
printf("Ucgenin yuksekligini giriniz : ");
scanf("%d",&yukseklik);
	
alanhesaplama(taban,yukseklik);

   return 0;
}