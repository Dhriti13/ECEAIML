#include<stdio.h>
int main()
{
  int n=1,a=2,b=3;
  switch(1+2*3)
  {
    case 1:printf("n is 1");
    break;
    case 2:printf("n is 2");
    break;
    case 3:printf("n is 3");
    break;
    case 7:printf("n is 1");
    break;
    default:printf("n is any number other than 1, 2 and 3");
    break;
  }
return 0;
}
