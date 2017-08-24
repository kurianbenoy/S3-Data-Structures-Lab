#include <stdio.h>
 void main()
{
 int a,b,c,i,n;
 printf("Enter the number of terms(>=2):");
 scanf("%d",&n);
 a=0;
 b=1;
 printf("0 1 ");
 for(i=0;i<n-2;i++)
 {
  c=a+b;
  printf("%d ",c);
  a=b;
  b=c;
 }
 printf("\n");
}
