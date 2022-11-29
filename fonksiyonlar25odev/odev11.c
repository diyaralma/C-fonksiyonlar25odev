#include  <stdio.h>
#include <conio.h>
#define PI 3.14;
// yari capi disardan girilen bir dairenin cevresini ve alanini bulan program.

int hesaplamalar(float r){

float cevre,alan;

cevre = 2*PI*r;
alan  = PI*r*r;               //r kismindaki hatayi duzelt.

return (cevre,alan); 
}


int main(){

float yaricap;

printf("Cevresini ve alanini ogrenmek istediginiz dairenin yaricap degerini giriniz:");
scanf("%f",&yaricap);

printf("Cevre:%f\nAlan:%f",hesaplamalar(yaricap));





   return 0;
}