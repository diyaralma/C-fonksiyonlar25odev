#include <stdio.h>

// vize ve final ortalamasini hesaplayan uygulama.

int hesaplama(int vize,int final){

float ort;
	 ort = (vize * 0.4 + final * 0.6);
     
	     
	if(ort>=84.5 && ort<=100)
		printf("Not ortalamaniz %.1f - Notunuz 'AA'",ort);
	else if(ort>=69.5 && ort<84.5)
		printf("Not ortalamaniz %.1f - Notunuz 'BB'",ort);
	else if(ort>=59.5 && ort<69.5)
		printf("Not ortalamaniz %.1f - Notunuz 'CC'",ort);
	else if(ort>=49.5 && ort<59.5)
		printf("Not ortalamaniz %.1f - Notunuz 'DD'",ort);
	else
		printf("Not ortalamaniz %.1f - Notunuz 'FF'",ort);    
	}
int main(){

int vize,final;

	printf("Vize notunuzu giriniz :"); 
   scanf("%d",&vize);

  	printf("Final notunuzu giriniz :"); 
   scanf("%d",&final);

   hesaplama(vize,final);

   return 0;
}