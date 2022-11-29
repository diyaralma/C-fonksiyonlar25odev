#include <stdio.h>

// kullanicidan alinan sayinin asal olup olmadigini sorgulayan uygulama.


int asalmi(int n){
  
  int i;

   for(i = 2; i < n; i++){

    if( n % i == 0 ){
     return 0;
    }
   else {
      return 1;
   }
   }


}



int main(){


int sayi;

printf("Bir sayi giriniz:");
scanf("%d",&sayi);

if(asalmi(sayi) == 0){
   printf("Girdiginiz sayi asal degildir.");
}
else{
   printf("Girdiginiz sayi asaldir.");
}



   return 0;
}