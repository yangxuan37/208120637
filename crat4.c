#include<stdio.h>
#define N 10
int Troitsky(long a[])
{  int count=0,i=0;
   long n,n1;
   for(n=1;n<=10000;n++)
    {  n1=(n%1000)*10+n/1000;
       for(i=1;i<10;i++)
         if(i*n==n1&&n!=n1)
         {  a[count++]=n;
            break;
         }
     }
   return count;
}
void main()
{  long a[N],i;
   int k;
   k=Troitsky(a);
   for (i=0;i<k;i++)
   {  printf("%10ld",a[i]);
      
   }
   printf("\n");
   
    
   
}
