#include <stdio.h>

// istenilen marka arabanin fiyatini yazdiran uygulama.

int markalar(int n){



switch(n){

case 1:
return 50000;

case 2:

return 599999;

case 3:

return 7899999;

case 4:

return 679999;


}
}


int main(){


int numara;
printf("\n\n\n1.Mazda\n2.Lexus\n3.Jaguar\n4.Maserati\n\n");
printf("Fiyatini sorgulamak istediginiz araba numarasini giriniz:");
scanf("%d",&numara);

printf("Arabanin fiyati:%d",markalar(numara));


   return 0;
}