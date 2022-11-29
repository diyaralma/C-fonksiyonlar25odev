#include <stdio.h>
#include <math.h>
int cozum(int i,int j, int k){
  
  float delta;
  float  kok1,kok2;
  delta = j*j - 4*i*k;
if(delta > 0){ 

  kok1 = (-j - sqrt(delta))/2.0*i;
  kok2 = (-j + sqrt(delta))/2.0*i;
return (kok1,kok2);
}
else if(delta ==0) {
   kok1=kok2=-j/(2*i);
   return (kok1,kok2);
}
else{
   return 0;
}

}



int main(){

int a,b,c;

printf("Denklemin katsayilarini sirasiyla giriniz:");
scanf("%d %d %d",&a,&b,&c);


if(cozum(a,b,c) == 0){
   printf("Denklemin gercek koku yok");
}

else{
   printf("Denklemin 1.koku:%f\nDenklemin 2.koku:%f",cozum(a,b,c));
}


   return 0;
}