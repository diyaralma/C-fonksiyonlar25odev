#include <stdio.h>

// vucut kitle indeksi hesaplayan uygulama.

int indeks(float kilo,float boy){

float ind;

ind=kilo/(boy*boy);

printf("Vucut kitle indeksiniz : %.2f \n", ind);

if(ind<18)
          printf("Zayif");
     else if(ind>=18 && ind<25)
          printf("Normal");
     else if(ind>=25 && ind<30)
          printf("Kilolu");
     else if(ind>=30 && ind<40)
          printf("Obez");
     else
          printf("Ileri Derece Obez");

}

int main(){


float boy,kilo;

printf("Kilonuz : "); 
scanf("%f",&kilo);

printf("Metre Cinsinden Boyunuz : "); 
scanf("%f",&boy);

indeks(kilo,boy);


   return 0;
}