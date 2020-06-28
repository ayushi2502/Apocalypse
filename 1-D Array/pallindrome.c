#include<stdio.h>
void main()
 {
   int a[30],i,n,c=0;
   printf("enter values");
   scanf("%d",&n);
   for(i=0;i<n;i++);
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==a[n-i-1])
        c++;
    }
      if(c==i)
      {
        printf("array is pallindrome");
       }
       else
       {
         printf("array is not pallindrome");
        }
}

