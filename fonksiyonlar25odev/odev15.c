#include <stdio.h>
// girilen n tane sayinin teklerini ve ciftlerini toplayan uygulama.

int toplama(int n){
int cifttoplam;
int tektoplam;
int i;
int sayi;
for(i=0;i<n;i++){

printf("sayi:");
scanf("%d",&sayi);

if(sayi %2 ==0)
cifttoplam += sayi;

else
tektoplam +=sayi;

}
printf("cift sayilarin toplami:\n");
printf("tek sayilarin toplami:\n");

return (cifttoplam,tektoplam);

}


int main(){

int n;

printf("n degerini giriniz:");
scanf("%d",n);

toplama(n);


   return 0;
}