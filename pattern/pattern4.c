#include<stdio.h>
void main()
{
 int i,n,j,k;
 printf("enter limit");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   for(j=0;j<=i;j++)
   {
      if(k%2==0)
      {
        printf("enter 1");
        k++;
       }
       else
       {
         printf("enter 0");
         k++;
         }

      }
      printf("/n");
  }
}
