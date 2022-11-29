#include <stdio.h>
// optimum oda sicakligi ve mevcut oda sicakligi arasindaki farki yazdiran uygulama.
int olcum(int n){

int optimum = 24;
int a;
  if(n > optimum){

   a = n - optimum;

   printf("Oda sicakligi olmasi gerekenden %d derece fazla.\n",a);
  }
  else if(n < optimum){

   a = optimum - n;
  printf("Oda sicakligi olmasi gerekende %d derece az.\n",a);

  }
  else{

 printf("Oda optimum sicaklikta.\n");
 
     
  }
}



int main(){

int sicaklik;


printf("Odanin sicakligi:");
scanf("%d",&sicaklik);

olcum(sicaklik);


   return 0;
}