
#include <stdio.h>

// kullanicidan negatif bir sayi isteyen uygulama.

void hatayibas(int hata){
   printf("hata kodu %d",hata);
}



int main(){

int sayi;

printf("Negatif olmayan bir sayi giriniz:");
scanf("%d",&sayi);

if(sayi < 0){
   hatayibas(400);
}

else{
   printf("Tebrikler");
}

   return 0;
}