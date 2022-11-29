#include <stdio.h>

int aci(int n,int l){

return (180 -(n + l));


}




int main(){

int sayi1,sayi2;


printf("Ucgenin bilinen iki acisini giriniz:");
scanf("%d %d",&sayi1,&sayi2);

printf("Ucgenin 3.acisi:%d",aci(sayi1,sayi2));






   return 0;
}