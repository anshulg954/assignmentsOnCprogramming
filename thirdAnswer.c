#include<stdio.h>
main()
{
    float a,b,c;
    printf("ENTER THREE SIDES OF TRIANGLE\n");
    scanf("%f\n%f\n %f",&a,&b,&c);
    
    if((a+b<c)||(a+c<b)||(b+c<a))
      printf("0\n");
    else
      printf("1\n");
}
