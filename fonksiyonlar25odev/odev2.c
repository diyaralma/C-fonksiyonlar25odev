#include <stdio.h>

// kullanicidan istenilen 2 sayininin toplamini hesaplayan kodlama.

int toplama(int a,int b){

return (a + b);

}



int main(){


int n1,n2;


printf("Iki sayi giriniz:");
scanf("%d %d",&n1,&n2);

printf("iki sayinin toplami:%d",toplama(n1,n2));




   return 0;
}