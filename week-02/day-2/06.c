#include <stdio.h>

int main ()
{
   int f=16;
   float gyok=f;
   while (gyok*gyok-f>0.00001){
   	gyok-=0.00001;
   }
   printf("%f\n",gyok);
   
   return(0);
}

//printf("%d\n",b);
