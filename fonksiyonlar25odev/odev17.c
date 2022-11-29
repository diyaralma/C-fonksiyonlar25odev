#include <stdio.h>
// istenilen sayini carpim tablosunu yazdiran uygulama.
int carpimtablosu(int n){

int i,j;  

for (i=1; i <= n; i++){
          for (j=1; j <= 10; j++){
               printf("%d x %d : %d\t\n",i, j, i*j);
          }
          printf("\n");
     }


}

int main(){

int sayi;

printf("Carpim tablosunu gormek istediginiz sayiyi giriniz:");
scanf("%d",&sayi);
carpimtablosu(sayi);



   return 0;
}