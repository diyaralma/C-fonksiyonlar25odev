#include <stdio.h>
// girilen 3 sayinin buyukten kucuge siralamasini veren uygulama.

int siralama(int a,int b,int c){

int buyuk,kucuk;

buyuk = (a>b && a>c) ? a: (b>a && b>c) ? b: c;
kucuk = (a<b && a<c) ? a: (b<a && b<c) ? b: c;

}


int main(){

int a,b,c;


printf("3 sayi giriniz:");
scanf("%d %d %d",&a,&b,&c);

printf("kucuk sayi:%d\nbuyuk sayi:%d",siralama(a,b,c));




   return 0;
}