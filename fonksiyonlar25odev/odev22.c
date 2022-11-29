#include <stdio.h>

// kullanicidan alinan iki sayiyi dort islem yaparak yazdiran uygulama.

int dortislem(int sayi1,int sayi2){

int toplam,cikar,carpim,kalan;
float bolme;


toplam=sayi1+sayi2;
printf("Toplam: %d \n",toplam);

cikar=sayi1-sayi2;
printf("Fark: %d \n",cikar);
	

carpim=sayi1*sayi2;
printf("Carpim : %d \n",carpim);

bolme=(float)sayi1/(float)sayi2; 
printf("Bolum : %.1f",bolme); 

}


int main(){

int sayi1,sayi2;

printf("Ilk Sayiyi Giriniz = "); 
scanf("%d",&sayi1);

printf("Ikinci Sayiyi Giriniz = "); 
scanf("%d",&sayi2); 
	
dortislem(sayi1,sayi2);   
	

   return 0;
}