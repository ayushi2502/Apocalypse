#include<stdio.h>
 void main()
 {
     int nm;
     float bill;
     printf("enter value");
     scanf("%d",&nm);
     bill=5*nm;
     if(bill>100)
     {
         bill=0.9*bill;
     }
     printf("%f",bill);
     getch();
 }

