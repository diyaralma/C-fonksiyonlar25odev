#include <stdio.h>

// banka islemlerini gerceklestiren uygulama.

int islem(int i){

int bakiye = 1000;
int yatirma;
int cekme;
int havale;
switch(i){
   
   case 1:

   printf("\nBakiyeniz:");   
return bakiye;
   case 2:
   printf("Yatirilacak tutari giriniz:");
   scanf("%d",&yatirma);
   bakiye = bakiye + yatirma;
   printf("Bakiyeniz:");
return bakiye;
   case 3:
   
   printf("Cekilecek tutari giriniz:");
   scanf("%d",&cekme);

   if(cekme > bakiye){
      printf("Yetersiz bakiye.Eksik bakiye miktari:");
      return bakiye-cekme;
   }
   else{
    bakiye = bakiye - cekme;
    printf("bakiyeniz:");

   }
return bakiye;
   case 4:
   
   printf("Havale yapilacak tutari giriniz:");
   scanf("%d",&havale);

   if(havale > bakiye){
      printf("Yetersiz bakiye.Eksik bakiye miktari:");
      return bakiye-havale;
   }
   else{
    bakiye = bakiye - havale;
    printf("bakiyeniz:");

   }
  return bakiye;
   case 5:
   
   printf("Kartiniz iade edildi.");
   return 0;
   default:
                                             //burdaki return degerinin yazimdan sonra gelme nedenini  ve nasil gelmeyebilir onu ogren.
   printf("Bilinmeyen islem.");
   return 0;
}


}


int main(){

int i;
printf("\n\nIslemler\n\n1.Bakiye sorgulama\n2.Para yatirma\n3.Para cekme\n4.Havale yapma\n5.Kart iade\n\nYapmak istediginiz islemi tuslayiniz:");
scanf("%d",&i);

printf("%d",islem(i));


   return 0;
}