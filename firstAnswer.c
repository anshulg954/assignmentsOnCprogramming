#include<stdio.h>
main()
{
  int i,j,k;
  printf("ENTER THREE NO.S\n");
  scanf("%d\n %d\n %d", &i,&j,&k);
  
  if((i==j==k)||(i==j)||(i==k)||(j==k))
  {
    printf("0\n");
  }
  else
  printf("1\n ");
  
}
  
