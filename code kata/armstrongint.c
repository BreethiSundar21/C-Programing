#include <stdio.h>
int main()
{
  int a,b, i, t, sum, r;
  scanf("%d %d", &a, &b);
  for(i=a+1; i<b; ++i)
  {
      t=i;
      sum=0;
      while(t!=0)
      {
          r=(t%10);
          sum+=r*r*r;
          t/=10;
      }
      if(i==sum)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
