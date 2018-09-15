#include<stdio.h>

int main()
{
  int M;
  int N;
  printf("ENTER THE NUMBERS");
  scanf("%d\n %d", &M, &N);
  
  if(M%N == 0)
  {
    prinf("%d", (M/N));
  }
  
  else
  {
    printf("0");
  }
}
