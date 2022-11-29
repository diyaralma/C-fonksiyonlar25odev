#include <stdio.h>

// fibonacci dizisinde kullanicinin istedigi karakteri gosteren uygulama.

int fibonacci(int a){

int i;
int sayi1=1;
int sayi2=1;
int sum;
for(i=0; i < a -1; i++){
   
   sum = sayi2;
   sayi2 += sayi1;
   sayi1 = sum;
   

}
return sayi1;



}


int  main(){

int sayi;

printf("Fibonacci dizisinde kacinci sayiyi ogrenmek istiyorsunuz:");
scanf("%d",&sayi);

printf("%d",fibonacci(sayi));



return 0;
}