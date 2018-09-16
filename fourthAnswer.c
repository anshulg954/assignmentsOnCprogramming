#include<stdio.h>
int find_even(int k)
{
  int terminator = -1;
  scanf("%d",&k);
  int arr[7];
  for(int i = 0; i < 7; i++)
  {
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < 7; i++)
  {
    if(arr[i] == k)
    {
      terminator = i;
    }
  }
  if(terminator > 0)
  {
    printf("%d\n", terminator);
  }
  else
  {
    printf("NUMBER IS UNAVAILABLE TO BE FETCHED OUT");
  }
}

int main()
{
  int k;
  scanf("%d",&k);
  find_even(k);
}
