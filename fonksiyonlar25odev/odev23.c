#include <stdio.h>

// istenilen sayinin istenilen sekilde ussunu alan uygulama.

int ussunualma(int taban,int us){

int sonuc = 1;
int i; 

for(i=0 ; i<us ; i++){
          sonuc = sonuc * taban;
     }

     printf("%d uzeri %d = %d",taban, us, sonuc);

}
int main(){


int taban;
int us;


printf("Taban giriniz : ");
scanf("%d",&taban);

printf("Us giriniz : ");
scanf("%d",&us);

ussunualma(taban,us);


   return 0;
}