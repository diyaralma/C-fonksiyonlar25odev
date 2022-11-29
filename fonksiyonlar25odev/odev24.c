#include <stdio.h>
// iki sayi arasindaki sayilarin toplamini veren uygulama.
int toplama(int sayi1,int sayi2){

int i;
int toplam = 0;


for(i=sayi1+1 ; i<sayi2 ; i++){       
          toplam = toplam + i;
     } 

     printf("Sonuc : %d",toplam);

}


int main(){

int sayi1,sayi2;

printf("1. sayiyi giriniz. "); 
scanf("%d",&sayi1); 

printf("2. sayiyi giriniz. "); 
scanf("%d",&sayi2); 


toplama(sayi1,sayi2);

   return 0;
}