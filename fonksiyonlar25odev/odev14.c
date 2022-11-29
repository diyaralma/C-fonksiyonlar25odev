#include <stdio.h>
// ucgensel formatta istenilen satir sayisi kadar * isareti yazdiran uygulama.
int ucgen(int x){

int i,j;

for(i=1 ; i<=x ; i++){

   for(j=1 ; j<=x-i ; j++)
            printf(" ");

    for(j=1 ; j<=(i*2-1) ; j++)
            printf("*");

   printf("\n");
}
}




int main(){

int satir;

printf("Ucgensel formatta kac satir * isaretini gormek istediginizi yaziniz.");
scanf("%d",&satir);

ucgen(satir);









   return 0;
}