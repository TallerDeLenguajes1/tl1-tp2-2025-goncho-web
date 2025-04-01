#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
   double v[N];
  for (int i = 0; i < N; i++)
  {
       v[i] = 1+rand()%100;
       printf("%.2f\n",v[i]);   
  }

  return 0;
  
}
   