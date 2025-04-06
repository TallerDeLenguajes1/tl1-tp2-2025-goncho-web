#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 20

int main(){
   srand(time(NULL));
   int v[N];
   int *p;
  for (int i = 0; i < N; i++)
  {
       v[i] = 1+rand()%100;
       p = &v[i];
       printf("%d\n",*p);
       p++;   
  }

  return 0;
  
}