#include <stdio.h>


// kullanicinin girdigi sayiya kadar olan sayilarin toplanmasi.
int seriToplama(int x) {
int toplam = 0;
	
	for(int i = 1; i <= x; i++){
			
	 toplam = i + toplam;

	}

	return toplam;
}

int main(){
     
int x;
   
printf("Bir sayi giriniz degeri giriniz :"); 
scanf("%d",&x);
	
int a = seriToplama(x);
	
printf("Girdiginiz sayi icin seri toplam: %d ", a); 













   return 0;
}