#include<stdio.h>
void main()
{
  int i,n,j,k=1;
  printf("enter limit");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%d",k);
      k++;
    }
   }
     printf("/n");
}
