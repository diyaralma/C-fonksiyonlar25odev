#include <stdio.h>


// kullanicidan alinin sayinin cift ve tekligini sorgulayan uygulama.

int sorgulama(int sayi){


   if(sayi%2 == 0)
		printf("%d sayisi cifttir.", sayi);
	else
		printf("%d sayisi tektir.", sayi);
}





int main(){

int sayi;


printf("Bir sayi giriniz:");

scanf("%d",&sayi);

sorgulama(sayi);



   return 0;
}