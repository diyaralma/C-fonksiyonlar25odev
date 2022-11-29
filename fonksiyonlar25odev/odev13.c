#include <stdio.h>



int ucgen(int x){

// ucgensel formatta istenilen satir sayisi kadar # isareti yazdiran uygulama.

int i,j;
int n = 1;
   
   for(int  i = 0; i < x; i++){
      
      for(int j = 0; j < n; j++){
            printf("# ");
        }
        printf("\n");
        n++;
    }

}




int main(){

int satir;

printf("Ucgensel formatta kac satir # gormek istiyorsunuz?");
scanf("%d",&satir);

ucgen(satir);




   return 0;
}